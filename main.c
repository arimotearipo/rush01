/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 23:37:16 by wwan-taj          #+#    #+#             */
/*   Updated: 2022/04/19 23:37:17 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
