/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 09:47:07 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/13 10:17:28 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	printf("Res: %d\n", ft_strncmp("Hola", "Fw", 2));
	printf("Res: %d\n", ft_strncmp("Hola", "Hola", 2));
	printf("Res: %d\n", ft_strncmp("Lolaaaa", "Loliiia", 7));
	printf("Res: %d\n", ft_strncmp("Ccc", "A", 1));
}


