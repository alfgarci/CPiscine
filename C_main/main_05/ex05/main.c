/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 05:03:38 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/19 05:13:29 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb);

int main()
{
	int n = 490000;

	printf("La raiz cuadrada de %d es: %d\n", n, ft_sqrt(n));
	return 0;
}
