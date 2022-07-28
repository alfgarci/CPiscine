/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 09:47:07 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/13 09:56:56 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strcmp(char *s1, char *s2);

int main()
{
	printf("Res: %d\n", ft_strcmp("Hola", "Holaa"));
	printf("Res: %d\n", ft_strcmp("Hola", "Hola"));
	printf("Res: %d\n", ft_strcmp("Lo", "Lol"));
	printf("Res: %d\n", ft_strcmp("Ccc", "C"));
}


