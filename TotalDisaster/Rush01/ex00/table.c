/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:49:04 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/17 20:36:23 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "table.h"
#include <unistd.h>

void	init_table(int *arr, int table[4][4])
{
	int	i;
	int	j;
	int	arr_tmp[4];

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			table[i][j] = 0;
	}
	i = 0;
	while (i < 16)
	{
		j = -1;
		while (++j < 4)
			arr_tmp[j] = arr[i + j];
		fill_base1(arr_tmp, table, i);
		fill_base4(arr_tmp, table, i);
		fill_base32(arr, table);
		i += 4;
	}
}

void	fill_base1(int *arr_tmp, int table[4][4], int pos)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if (pos == 0 && arr_tmp[j] == 1)
			table[0][j] = 4;
		else if (pos == 4 && arr_tmp[j] == 1)
			table[3][j] = 4;
		else if (pos == 8 && arr_tmp[j] == 1)
			table[j][0] = 4;
		else if (arr_tmp[j] == 1)
			table[j][3] = 4;
		j++;
	}
}

void	fill_base4(int *arr_tmp, int table[4][4], int pos)
{
	int	j;
	int	z;
	int	x;

	x = -1;
	z = 4;
	j = -1;
	while (++j < 4)
	{
		if (pos == 0 && arr_tmp[j] == 4)
			while (++x < 4)
				table[x][j] = x + 1;
		else if (pos == 4 && arr_tmp[j] == 4)
			while (--z < 4)
				table[z][j] = z - 1;
		else if (pos == 8 && arr_tmp[j] == 4)
			while (++x < 4)
				table[j][x] = x + 1;
		else if (arr_tmp[j] == 4)
			while (--z < 4)
				table[j][z] = z - 1;
	}
}

void	fill_base32(int *arr, int table[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		if (arr[i] == 2 && arr[i + 4] == 3)
			table[1][i] = 4;
		if (arr[i] == 3 && arr[i + 4] == 2)
			table[2][i] = 4;
		i++;
	}
	i = 8;
	while (i < 12)
	{
		if (arr[i] == 2 && arr[i + 4] == 3)
			table[j][1] = 4;
		if (arr[i] == 3 && arr[i + 4] == 2)
			table[j][2] = 4;
		i++;
		j++;
	}
}

void	print_table(int tab[4][4])
{
	int		i;
	int		j;
	char	c;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			c = tab[i][j] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}
