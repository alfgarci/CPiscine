/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 09:47:07 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/13 16:59:14 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char cad1[] = "Concatenamos esta cadena";
	char cad2[] = " ,con esta";
	printf("Res: %s\n", ft_strncat(cad1, cad2, 5));
}
