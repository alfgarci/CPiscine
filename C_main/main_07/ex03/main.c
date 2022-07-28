/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:39:52 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/21 18:36:25 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char **arr;
	char *sep = ", ";
	char *join;

	arr = (char **)malloc(3 * sizeof(char *));
	arr[0] = "Hola";
	arr[1] = "como estas?";
	arr[2] = "yo muy bien";

	join = ft_strjoin(3, arr, sep);
	printf("%s\n", join);

}
