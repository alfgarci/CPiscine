/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <alfgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 08:56:05 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/24 20:54:20 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_strings.h"

char	*ft_strdup(char *str)
{
	int		i;
	int		len;
	char	*dest;
	char	*save;

	i = -1;
	len = ft_strlen(str);
	dest = (char *)malloc(len * sizeof(char) + 1);
	save = dest;
	if (!save)
		return (0);
	while (str[++i] != '\0')
		save[i] = str[i];
	save[i] = '\0';
	return (dest);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		ft_putchar(str[i]);
}
