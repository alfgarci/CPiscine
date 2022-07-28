/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 02:49:32 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/19 13:12:22 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_recursive_factorial(int nb);

int main()
{
	int a = 9;
	printf("El factorial de %d es: %d\n", a, ft_recursive_factorial(a));
	return 0;
}
