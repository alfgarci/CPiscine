/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:24:06 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/25 19:28:22 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_abs.h"

int	main(void)
{
	int num;
	int num2;

	num = 4;
	num2 = -5;
	
	printf("Num1: %d\nNum2: %d\n", ABS(num), ABS(num2));
	return (0);

}