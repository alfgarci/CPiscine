/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 07:34:40 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/12 07:39:56 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main()
{
	int res1;
	int res2;
	char cadena1[] = "asasdsd";
	char cadena2[] = "545$ada";
	
	res1 = ft_str_is_alpha(cadena1);
	res2 = ft_str_is_alpha(cadena2);

	printf("Primera cadena: %d\nSegunda Cadena: %d ",res1, res2);
}
