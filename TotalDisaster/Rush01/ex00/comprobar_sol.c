/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comprobar_sol.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:08:49 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/17 20:56:34 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	comprobar_izda(int *arr, int table[4][4])
{
	int	maximo;
	int	i;
	int	count;
	int	j;

	maximo = table[0][0];
	i = -1;
	j = -1;
	count = 0;
	while (++j < 4)
	{
		while (++i < 4)
		{
			if (table[j][i] >= maximo)
			{
				count++;
				maximo = table[j][i];
			}
		}
		i = -1;
		if (count != arr[j])
			return (1);
	}
	return (0);
}

int	comprobar_dcha(int *arr, int table[4][4])
{
	int	maximo;
	int	i;
	int	count;
	int	j;

	maximo = table[0][3];
	i = 2;
	j = -1;
	count = 0;
	while (++j < 4)
	{
		while (--i >= 0)
		{
			if (table[j][i] >= maximo)
			{
				count++;
				maximo = table[j][i];
			}
			i--;
		}
		i = 2;
		if (count != arr[j])
			return (1);
	}
	return (0);
}

int	comprobar_arriba(int *arr, int table[4][4])
{
	int	maximo;
	int	i;
	int	count;
	int	j;

	maximo = table[0][0];
	i = -1;
	j = -1;
	count = 0;
	while (++j < 4)
	{
		while (++i < 4)
		{
			if (table[i][j] >= maximo)
			{
				count++;
				maximo = table[i][j];
			}
		}
		i = -1;
		if (count != arr[j])
			return (1);
	}
	return (0);
}

int	comprobar_abajo(int *arr, int table[4][4])
{
	int	maximo;
	int	i;
	int	count;
	int	j;

	maximo = table[3][0];
	i = 2;
	j = 1;
	count = 0;
	while (++j < 4)
	{
		while (--i >= 0)
		{
			if (table[i][j] >= maximo)
			{
				count++;
				maximo = table[i][j];
			}
		}
		i = 2;
		if (count != arr[j])
			return (1);
	}
	return (0);
}

int	comprobar_matriz(int *arr, int table[4][4])
{
	int	arr_tmp[4];
	int	iscorrect;

	iscorrect = 0;
	while (i < 16)
	{
		j = -1;
		while (++j < size)
			arr_tmp[j] = arr[i + j];
		if (i == 0)
			iscorrect += comprobar_arriba(arr, table);
		else if (i == 4)
			iscorrect += comprobar_abajo(arr, table);
		else if (i == 8)
			iscorrect += comprobar_izda(arr, table);
		else
			iscorrect += comprobar_dcha(arr, table);
		i += 4;
	}
	if (iscorrect != 0)
		return (-1);
	return (0);
}
