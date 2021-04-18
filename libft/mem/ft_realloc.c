
#include "libft.h"

void	*ft_realloc2(void *ptr, size_t old_size, size_t new_size)
{
	void	*new;

	if (old_size == new_size)
		return (ptr);
	if (!(new = malloc(new_size)))
	{
		ft_memdel(&ptr);
		return (NULL);
	}
	ft_bzero(new, new_size);
	if (ptr)
		new = ft_memmove(new, ptr, old_size);
	ft_memdel(&ptr);
	return (new);
}

void	*ft_realloc(void *ptr, size_t new_size)
{
	void	*new;

	if (!new_size && ptr)
	{
		if (!(new = (char *)ft_memalloc(1)))
			return (NULL);
		ft_memdel(&ptr);
		return (new);
	}
	if (!(new = ft_memalloc(new_size)))
		return (NULL);
	if (ptr)
	{
		ft_memcpy(new, ptr, new_size);
		ft_memdel(&ptr);
	}
	return (new);
}
