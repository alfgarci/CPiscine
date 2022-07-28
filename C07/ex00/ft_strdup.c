/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 21:04:58 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/21 19:28:32 by alfgarci         ###   ########.fr       */
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
