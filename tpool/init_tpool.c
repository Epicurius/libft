/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_tpool.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 10:14:42 by nneronin          #+#    #+#             */
/*   Updated: 2020/11/09 13:05:01 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tpool.h"

void	*tpool_add(t_tpool *tpool, int (*func)(void *), void *arg)
{
	t_task	*task;

	if (!func)
		return (NULL);
	if (!(task = create_task(func, arg)))
		return (NULL);
	pthread_mutex_lock(&tpool->mutex);
	if (tpool->tasks)
		task->next = tpool->tasks;
	tpool->tasks = task;
	pthread_cond_broadcast(&tpool->task_cond);
	pthread_mutex_unlock(&tpool->mutex);
	return (0);
}

t_task	*create_task(int (*func)(void*), void *arg)
{
	t_task	*new_task;

	if (!func)
		return (0);
	if (!(new_task = (t_task *)malloc(sizeof(t_task))))
		return (0);
	new_task->func = func;
	new_task->arg = arg;
	new_task->next = NULL;
	return (new_task);
}

int		init_tpool(t_tpool *tpool, int amount)
{
	int	i;

	i = -1;
	bzero(tpool, sizeof(t_tpool));
	pthread_mutex_init(&tpool->mutex, NULL);
	pthread_cond_init(&tpool->task_cond, NULL);
	pthread_cond_init(&tpool->main_cond, NULL);
	tpool->nb_threads = amount;
	if (!(tpool->threads = (pthread_t *)malloc(sizeof(pthread_t) * amount)))
		return (1);
	bzero(tpool->threads, sizeof(pthread_t) * amount);
	while (++i < amount)
		if (pthread_create(&tpool->threads[i], NULL, tpool_func, tpool))
			return (2);
	pthread_mutex_lock(&tpool->mutex);
	while (tpool->alive_threads < tpool->nb_threads - 1)
		pthread_cond_wait(&tpool->main_cond, &tpool->mutex);
	pthread_mutex_unlock(&tpool->mutex);
	return (0);
}
