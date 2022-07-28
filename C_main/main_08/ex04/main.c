/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 23:11:24 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/25 23:49:13 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_stock_str.h"


struct s_stock_str  *ft_strs_to_tab(int ac, char **av);

int	main(int ac, char **av)
{
	int	i;
	struct s_stock_str	*s;

	i = -1;
	s = ft_strs_to_tab(ac, av);
	while (++i < ac)
	{
		printf("Tam %d\n", s[i].size);
		printf("Original: %s\n", s[i].str);
		printf("Coopia: %s\n", s[i].copy);
		printf("\n");
	}
	return (0);
}
