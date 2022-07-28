/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 04:59:49 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/07 08:49:52 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int	negativo;
	int	positivo;

	negativo = 78;
	positivo = 80;
	if (n < 0)
	{
		write(1, &negativo, 1);
	}
	else
	{
		write(1, &positivo, 1);
	}
}
