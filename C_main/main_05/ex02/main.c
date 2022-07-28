/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 02:58:23 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/19 03:00:51 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power);

int	main()
{
	int n = 3;
	int p = 4;
	printf("%d elevado a %d es: %d\n", n, p, ft_iterative_power(n,p));
	return (0);
}
