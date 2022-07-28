/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 07:31:21 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/27 14:44:28 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	get_solution(int **m, int row, int col)
{
	int	j;
	int	i;
	int	flag;
	int	n;

	i = -1;
	j = -1;
	flag = 1;
	n = 2;
	while (flag == 1)
	{
		flag = 0;
		while (++i < row)
		{
			while (++j < col)
			{
				if (m[i - 1][j - 1] >= n - 1)
				{
					if (m[i - 1][j] >= n - 1 && m[i][j - 1] >= n - 1)
					{
						m[i][j] = n;
						flag = 1;
					}
				}
			}
		}
		n++;
	}
}

int	**parse_num(char **map, char e, char o)
{
	int	**arr;
	int	i;
	int	j;

	i = 0;
	i = 0;
	while (map[++i] != 0)
	{
		j = 0;
		while (map[i][j] != '\0')
		{
			if (map[i][j] == e)
				arr[i][j] = 1;
			if (map[i][j] == o)
				arr[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	get_dimension(char **map, int *row, int *col)
{
	int	i;
	int	j;
	int	n_row;
	int	n_col;

	i = 0;
	j = -1;
	n_row = 0;
	n_col = 0;
	while (map[++i] != 0)
		n_row++;
	while (map[1][++j] != '\0')
		n_col++;
	*row = n_row;
	*col = n_col;
}
