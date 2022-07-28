/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:45:32 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/21 18:54:54 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main()
{
	char cad[] = "iksjdkajskldlasj";
	char buscar[] = "como";

	printf("Cadena en la que busco: %s\n",cad);
	printf("Cadena que busco: %s\nEsta en la posicion: %s",buscar, ft_strstr(cad, buscar));
}
