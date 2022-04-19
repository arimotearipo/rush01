#ifndef RUSH_H
# define RUSH_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_grid
{
	int	**arr;
	int	*colup;
	int	*coldown;
	int	*rowleft;
	int	*rowright;
}				t_grid;

int		checkinput(char **av);
void	ft_putstr(char *str);
void	parseinputs(char **av, t_grid *grid);
int		ft_atoi(char c);

#endif