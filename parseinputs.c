#include "rush.h"

void	createarrays(t_grid *grid)
{
	int	i;

	grid->arr = malloc(sizeof(int *) * 4);
	i = 0;
	while (i < 4)
	{
		grid->arr[i] = malloc(sizeof(int) * 4);
		i++;
	}
	grid->colup = malloc(sizeof(int) * 4);
	grid->coldown = malloc(sizeof(int) * 4);
	grid->rowleft = malloc(sizeof(int) * 4);
	grid->rowright = malloc(sizeof(int) * 4);
}

void	parseinputs(char **av, t_grid *grid)
{
	int	i;

	createarrays(grid);
	i = 0;
	while (i < 4)
	{
		grid->colup[i] = ft_atoi(av[i + 1][0]);
		i++;
	}
	while (i < 8)
	{
		grid->coldown[i] = ft_atoi(av[i + 1][0]);
		i++;
	}
	while (i < 12)
	{
		grid->rowleft[i] = ft_atoi(av[i + 1][0]);
		i++;
	}
	while (i < 16)
	{
		grid->rowright[i] = ft_atoi(av[i + 1][0]);
		i++;
	}
}
