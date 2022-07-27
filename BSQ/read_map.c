/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <alfgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:33:31 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/27 03:54:57 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	check_first_line(char *str, char *empty, char *obs, char *full)
{
	int	num;
	int	i;

	i = -1;
	num = 0;
	while (str[++i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		num = num * 10 + str[i] - '0';
	}
	empty = &str[i];
	obs = &str[++i];
	full = &str[++i];
	return (num);
}

char	**read_map(char *map)
{
	char 	*tot_arr;
	char	**map_arr;
	int	fd;
	char 	buff;
	int	count;

	count = 0;
	fd = open(map, O_RDWR);
	while (read(fd, &buff, 1) != 0)
		count++;
	close(fd);
	tot_arr= (char *)malloc((count + 1) * sizeof(char));
	fd = open(map, O_RDWR);
	count = -1;
	while (read(fd, &buff, 1) != 0)
		tot_arr[++count] = buff;
	map_arr = ft_split(tot_arr, "\n");
	close(fd);
	free(tot_arr);
	return (map_arr);
}

int	get_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_valid_map(char **map, char e, char o, char f)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (map[i] != 0)
	{
		
		if (get_len(map[1]) != get_len(map[i]))
			return (1);
		while (map[i][j] != '\0')
		{
			if (map[i][j] != e && map[i][f] != o && map[i][f] != f)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	char	**map;
	int	res;

	if (ac > 1)
	{
		map = read_map(av[1]);
		res = check_valid_map(map, '.', 'o', 'x');
	}

	printf("%d\n", res);
	return (0);
}
