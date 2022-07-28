/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 02:58:23 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/20 20:41:04 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power);

int	main()
{
	int n = 5;
	int p = -2;
	printf("%d elevado a %d es: %d\n", n, p, ft_recursive_power(n,p));
	return (0);
}
