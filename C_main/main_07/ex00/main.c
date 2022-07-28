/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 00:58:29 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/21 19:28:07 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int main(void)
{
	char *str = "Hola como estas????";
	char *tmp;
	char *h;

	printf("Cadena: %s \n", str);
	tmp = strdup(str);
	printf("Cadena .h: %s \n", tmp);
	h = ft_strdup(str);
	printf("Cadena 42: %s \n", h);
}
