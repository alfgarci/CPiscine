/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 05:44:11 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/20 00:12:05 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

int main()
{
	int nb = 90;
	printf("El numero primo sig a %d -> %d\n", nb, ft_find_next_prime(nb));
	return (0);
}
