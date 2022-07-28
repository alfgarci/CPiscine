/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:50:01 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/11 17:01:47 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main ()
{
	char destino[] = "Cadena destino, va a ser borrada";
	char *dest;
	char origen[] = "Esta cadena va a borrar a la otra";
	char *orig;
	unsigned int lon;

	dest = destino;
	orig = origen;
	
	printf("Antes:\n Destino: %s\n Origen: %s\n", destino, origen);
	lon = ft_strlcpy(dest,orig,12);
	printf("Despues:\n Destino: %s\n Origen: %s\n", destino, origen);
	printf("Return fun, leng: %d ", lon);
}
