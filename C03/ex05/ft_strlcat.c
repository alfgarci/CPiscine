/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat..c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 08:04:19 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/14 23:49:41 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	srclen;
	unsigned int	destlen;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	j = destlen;
	if (size == 0 || size <= destlen)
		return (srclen + size);
	while (src[i] != '\0' && i < (size - destlen - 1))
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (destlen + srclen);
}
