#include "rush.h"

int	main(int ac, char **av)
{
	t_grid	grid;

	if (ac == 17)
	{
		checkinput(av);
		parseinputs(av, &grid);
		checktower(&grid);
		return (0);
	}
	ft_putstr("Need 16 inputs\n");
	return (0);
}
