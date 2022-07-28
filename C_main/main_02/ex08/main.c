/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 07:34:40 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/12 07:59:34 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int main()
{
	char *res;
	char cadena[] = "ASDdsaFPO$asd";
	
	res = ft_strlowcase(cadena);
	printf("Return: %s",res);
}
