/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:31:20 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/27 15:50:10 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	get_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total_len;

	total_len = 0;
	i = -1;
	while (++i < size)
	{
		total_len += ft_strlen(strs[i]);
		total_len += ft_strlen(sep);
	}
	total_len -= ft_strlen(sep);
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;
	char	*arr;
	char	*aux;

	total_len = get_total_len(size, strs, sep);
	if (size <= 0)
		return ((char *)malloc(sizeof(char)));
	arr = (char *)malloc((total_len + 1) * sizeof(char));
	if (!arr)
		return (0);
	i = -1;
	aux = arr;
	while (++i < size)
	{
		ft_strcpy(aux, strs[i]);
		aux += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(aux, sep);
			aux += ft_strlen(sep);
		}
	}
	*aux = '\0';
	return (arr);
}
