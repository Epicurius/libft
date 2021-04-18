
# include "../libft.h"

static double	ft_clamp2(double x, double min, double max)
{
	if (x < min)
		return (min);
	if (x > max)
		return (max);
	return (x);
}

double		ft_clamp(double x, double a, double b)
{
	if (a > b)
		return (ft_clamp2(x, b, a));
	else if (a < b)
		return (ft_clamp2(x, a, b));
	else
		return (a);
}
