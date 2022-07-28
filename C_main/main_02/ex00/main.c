/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 03:22:37 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/11 03:58:48 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char	*src);

int main ()
{
	char source[] = "Cadena copia";
	char destiny[] = "Cadena origen";

	char *dest; 

	printf("Antes:\n Source: %s \n Destino: %s", source, destiny);

	dest = ft_strcpy(destiny, source);
	printf("\nDespues:\n DestinoParam: %s \n DestinoReturn: %s", destiny, dest);
	return 0;
}
