/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 09:47:07 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/13 10:39:05 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcat(char *dest, char *src);

int main()
{
	char cad1[] = "Concatenamos esta cadena";
	char cad2[] = " ,con esta";
	printf("Res: %s\n", ft_strcat(cad1, cad2));

}
