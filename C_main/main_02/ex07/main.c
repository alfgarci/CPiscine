/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 07:34:40 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/21 10:54:33 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int main()
{
	char *res;
	char *cadena = "ASDdsac$asd";
	
	res = ft_strupcase(cadena);
	printf("Return: %s",res);
}
