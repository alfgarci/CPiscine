/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 02:46:21 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/28 18:10:36 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		r *= nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (r);
}
