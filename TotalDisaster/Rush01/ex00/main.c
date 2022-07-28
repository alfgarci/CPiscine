/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:23:38 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/17 21:00:49 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "c_args.h"
#include "table.h"

int	main(int ac, char **av)
{
	int	tab[4][4];
	int	*arr;

	arr = (int *)malloc(16 * sizeof(int));
	if (ac == 2 && count_args(av[1]) == 1)
	{
		char_to_int(av[1], arr);
		if (check_inputs(arr, 4) == 1 && check_inputs2(arr, 4) == 1)
		{
			init_table(arr, tab);
			print_table(tab);
			write(1, "Error\n", 6);
		}
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	free(arr);
	return (0);
}
