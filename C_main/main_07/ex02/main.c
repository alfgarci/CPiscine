/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:39:52 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/21 15:25:24 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	max;
	int min;
	int	*arr;
	int tam;

	min = 7;
	max = 13;
	tam = ft_ultimate_range(&arr, min, max);
	for (int i = 0; i < (max - min); i++)
		printf("%d\n", arr[i]);
	return (0);
}
