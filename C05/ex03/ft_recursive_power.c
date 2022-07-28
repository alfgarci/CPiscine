/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 03:05:10 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/20 20:41:00 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (res > res * nb)
		return (0);
	if (power > 1)
		return (res * ft_recursive_power(res, power - 1));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (res);
}
