/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 08:17:00 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/14 18:34:27 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char	origen[] = "ABCD";
	char	dest[] = "1234";

	printf("%i\n", ft_strlcat(dest,origen,7));
	printf("%s\n", origen);
	printf("%s\n", dest);
}
