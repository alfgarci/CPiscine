/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 06:50:07 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/27 15:08:14 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_function.h"
#include "ft_map.h"

int	main(int ac, char **av)
{
	int		i;
	char	e;
	char	o;
	char	f;
	char	**map;

	i = 1;
	if (ac <= 1)
	{
		putstr("map error\n");
		return (0);
	}
	while (i < ac)
	{
		map = read_map(av[i]);
		if (check_fl(map[0], &e, &o, &f) >= 0 && check_map(map, e, o, f) != 0)
		{
			ft_putstr("map error\n");
			return (0);
		}
		solve(map, e, o, f);
		free(map);
	}
	return (0);
}
