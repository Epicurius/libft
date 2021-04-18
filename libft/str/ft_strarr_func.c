
# include "../libft.h"

int	ft_strarr_func(char **arr, void (*f)(char **))
{
	int i;

	i = -1;
	while (arr[++i] != NULL)
		if (f != NULL)
			f(&arr[i]);
	return (i);
}
