/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 08:32:10 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/27 14:55:39 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_function.h"

int	ft_strlen(char *str)
{
	int	num;

	num = 0;
	while (str[num] != '\0')
		num++;
	return (num);
}
