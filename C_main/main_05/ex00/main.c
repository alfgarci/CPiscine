/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 02:38:40 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/19 02:43:08 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_iterative_factorial(int nb);

int main()
{
	int a = 9;
	printf("Factorial de %d: %d\n", a, ft_iterative_factorial(a));
	return (0);
}
