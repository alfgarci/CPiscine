/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 04:58:36 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/14 09:22:50 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void){
	char cadsrc[] = "Cadena Origen";
	char caddes[] = "Hola como estas";
	char *ptorigen;
	char *ptdes;

	ptorigen = cadsrc;
	ptdes = caddes;

	char *dest;

	printf("Cadena Orig: %s\nCadena Dest: %sfin\n",cadsrc, caddes);
	dest = ft_strncpy(ptdes, ptorigen, 8);
	printf("Cadena Dest: %s:", dest);

}
