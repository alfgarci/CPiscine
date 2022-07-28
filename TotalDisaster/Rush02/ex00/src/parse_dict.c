/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <alfgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 02:30:32 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/24 20:53:38 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "ft_t_value.h"
#include "ft_strings.h"

char	*ft_read_file(char *path, int *n_lines)
{
	int		nc;
	char	buff;
	int		i;
	int		fd;
	char	*arr;

	nc = 0;
	i = 0;
	fd = open(path, O_RDWR);
	while (read(fd, &buff, 1) != 0)
	{	
		if (buff == '\n')
			i++;
		nc++;
	}
	close(fd);
	arr = (char *)malloc((nc + 1) * sizeof(char));
	*n_lines = i;
	i = -1;
	fd = open(path, O_RDWR);
	while (read(fd, &buff, 1) != 0)
		arr[++i] = buff;
	arr[i] = '\0';
	close(fd);
	return (arr);
}

int	ft_check_line(char *src)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (src[i])
		i++;
	while (src[n] && (src[n] <= '9' && src[n] >= '0'))
		n++;
	while (src[n] && (src[n] == ' '))
		n++;
	if (src[n] != ':')
		return (0);
	n++;
	while (src[n] && (src[n] == ' '))
		n++;
	while (src[n] && (src[n] >= 32))
		n++;
	if (n == i)
		return (1);
	return (0);
}

char	*get_v(char *str, int flag)
{
	int		i;
	int		j;
	char	*aux;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	aux = (char *)malloc((i + 1) * sizeof(char));
	i = 0;
	if (flag == 0)
		while (str[i] != '\0' && str[i] <= '9' && str[i] >= '0')
			aux[j++] = str[i++];
	else if (flag == 1)
	{
		while (str[i] != '\0' && str[i] != ':')
			i++;
		i++;
		while (str[i] != '\0' && str[i] == ' ')
			i++;
		while (str[i] && str[i] != '\n')
			aux[j++] = str[i++];
	}
	aux[j] = '\0';
	return (aux);
}

int	init_v(t_value *obj, char *num, char *name)
{
	int	num_size;
	int	name_size;

	num_size = ft_strlen(num);
	name_size = ft_strlen(name);
	obj->num = malloc(sizeof(char) * num_size);
	if (!obj->num)
		return (1);
	ft_strcpy(obj->num, num);
	obj->name = malloc(sizeof(char) * name_size);
	if (!obj->name)
		return (1);
	ft_strcpy(obj->name, name);
	return (0);
}

t_value	**parse_dict(char *file)
{
	t_value	**arr_p;
	char	*arr_tot;
	char	**arr_s;
	int		i;
	int		n_lines;

	i = -1;
	arr_tot = ft_read_file(file, &n_lines);
	arr_s = ft_split(arr_tot, "\n");
	arr_p = malloc(n_lines * sizeof(t_value *));
	while (arr_s[++i])
	{
		arr_p[i] = malloc(sizeof(t_value));
		if (ft_check_line(arr_s[i]) == 1)
			init_v(arr_p[i], get_v(arr_s[i], 0), get_v(arr_s[i], 1));
	}
	return (arr_p);
}
