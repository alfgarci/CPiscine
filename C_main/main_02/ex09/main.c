/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 07:18:37 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/11 07:27:04 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int main(void)
{
	char cadena[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("Cadena original: \n %s\n", cadena);
	
	char *tmp;

	tmp = ft_strcapitalize(cadena);

	printf("Cadena arreglada: \n %s", tmp);
}
