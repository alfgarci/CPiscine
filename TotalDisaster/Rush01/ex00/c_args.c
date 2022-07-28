/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_args.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:21:54 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/17 16:49:56 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c_args.h"
#include <stdio.h>

int	count_args(char *av)
{
	int	i;
	int	n_param;

	n_param = 0;
	i = -1;
	while (av[++i] != '\0')
	{
		if (av[i] < '0' || av[i] > '4')
			return (-1);
		n_param++;
		if (av[i + 1] == '\0')
			return (1);
		else if (av[i + 1] != 32)
			return (-1);
		i++;
	}
	if (n_param == 16)
		return (1);
	else
		return (-1);
}

void	char_to_int(char *av, int *arr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (av[i] != '\0')
	{
		arr[j] = av[i] - '0';
		j++;
		i += 2;
	}
}

int	check_inputs(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (((arr[i] + arr[i + 4]) < 3) || ((arr[i] + arr[i + 4]) > 5))
			return (-1);
		i++;
	}
	i = 7;
	size = 12;
	while (i < size)
	{
		if (((arr[i] + arr[i + 4]) < 3) || ((arr[i] + arr[i + 4]) > 5))
			return (-1);
		i++;
	}
	return (1);
}

int	check_inputs2(int *arr, int size)
{
	int	i;
	int	j;
	int	arr_tmp[4];

	i = 0;
	while (i < 16)
	{
		j = -1;
		while (++j < size)
			arr_tmp[j] = arr[i + j];
		if (count_numbers(arr_tmp) == -1)
			return (-1);
		i += 4;
	}
	return (1);
}

int	count_numbers(int *arr)
{
	int	count[4];
	int	i;
	int	j;

	j = 0;
	i = -1;
	while (++i < 4)
		count[i] = 0;
	i = -1;
	while (++i < 4)
	{
		if (arr[i] == 1)
			count[0]++;
		else if (arr[i] == 2)
			count[1]++;
		else if (arr[i] == 3)
			count[2]++;
		else
			count[3]++;
	}
	if (count[0] > 1 || count[1] > 3 || count[2] > 2 || count[3] > 1)
		return (-1);
	return (1);
}
