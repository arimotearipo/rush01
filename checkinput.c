#include "rush.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	checkonetofour(char c)
{
	if (c < '1' || c > '4')
		return (0);
	return (1);
}

int	checkinput(char **av)
{
	int	i;

	i = 1;
	while (i <= 16)
	{
		if (ft_strlen(av[i]) > 1)
		{
			ft_putstr("Need one digit for each input\n");
			return (0);
		}
		if (checkonetofour(av[i][0]) == 0)
		{
			ft_putstr("Value must be from 1 to 4\n");
			return (0);
		}
		i++;
	}
	return (1);
}
