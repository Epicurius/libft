
# include "../libft.h"

double		ft_atof(const char *str)
{
	double	integral;
	double	fractal;
	char	*c;
	int 	len;

	c = (char *)str;
	integral = (double)abs(ft_atoi(c));
	while (*c && *c != '.')
		c++;
	if (*c == '.')
		c++;
	fractal = (double)abs(ft_atoi(c));
	len = ft_strlen(c);
	while (len--)
		fractal /= 10;
	if (str[0] == '-')
		return ((integral + fractal) * -1);
	return (integral + fractal);
}
