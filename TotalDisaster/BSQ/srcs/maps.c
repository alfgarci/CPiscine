/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maps.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 06:37:23 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/27 14:26:54 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

char	**read_map(char *path)
{
	char	*tot_arr;
	char	**map_arr;
	int		fd;
	char	buff;
	int		count;

	count = 0;
	fd = open(path, O_RDWR);
	while (read(fd, &buff, 1) != 0)
		count++;
	close(fd);
	tot_arr = (char *)malloc((count + 1) * sizeof(char));
	fd = open(path, O_RDWR);
	count = -1;
	while (read(fd, &buff, 1) != 0)
		tot_arr[++count] = buff;
	map_arr = ft_split(tot_arr, "\n");
	close(fd);
	free(tot_arr);
	return (map_arr);
}

int	check_fl(char *str, char *empty, char *obs, char *full)
{
	int	num;
	int	i;

	i = 0;
	num = 0;
	if (str[0] <= '0' || str[0] > '9')
		return (-1);
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	*empty = str[i];
	*obs = str[++i];
	*full = str[++i];
	if (str[++i] != '\0')
		return (-1);
	return (num);
}

int	check_map(char **map, char e, char o, char f)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (map[i] != 0)
	{
		j = 0;
		if (ft_strlen(map[1]) != ft_strlen(map[i]))
			return (-1);
		while (map[i][j] != '\0')
		{
			if (map[i][j] != e && map[i][j] != o && map[i][j] != f)
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

void	print_map(char **map)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (map[i] != 0)
	{
		j = 0;
		while (map[i][j] != '\0')
		{
			write(1, &map[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
/*
int	main(int ac, char **av)
{
	char	**map;
	int	res;
	char 	e;
	char	o;
	char	f;
	int bien;

	if (ac > 1)
	{
		
		map = read_map(av[1]);
		bien = check_first_line(map[0], &e, &o, &f);
		if (bien == -1)
		{
			printf("MAL\n");
			return (-1);
		}
		printf("%d\n", bien);
		printf("%c\n", e);
		printf("%c\n", o);
		printf("%c\n", f);
		res = check_valid_map(map, e, o, f);
	}
	print_map(map);
	printf("%d\n", res);
	return (0);
}
*/
