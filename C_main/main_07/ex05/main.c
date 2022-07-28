/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:20:06 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/26 14:30:27 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(int ac, char **av)
{
	int		i = 0;
	char	**arr;
	(void)	ac;
	arr = ft_split(av[1], av[2]);

	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
	return (0);
}
