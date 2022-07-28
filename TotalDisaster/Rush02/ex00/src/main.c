/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <alfgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 00:53:19 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/24 21:06:38 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "ft_t_value.h"
#include "ft_strings.h"

char	ft_check_args(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] < '0' && str[i] > '9')
			return (0);
	return (1);
}

int	main(int ac, char **av)
{
	char	*path_dic;
	t_value	**parse;
	int		i;

	i = 0;
	if (ac == 3)
		path_dic = ft_strdup(av[2]);
	else if (ac == 2)
		path_dic = ft_strdup("numbers.dict");
	else
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	if (!ft_check_args(av[ac - 1]))
	{
		ft_putstr("Error\n");
		return (0);
	}
	parse = parse_dict(path_dic);
	return (0);
}
/*
while (i < 41)
	printf("\"%s\" \"%s\"\n", parse[++i][0].num, parse[i][0].name);
*/
