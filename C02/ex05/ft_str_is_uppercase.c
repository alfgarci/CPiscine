/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 05:42:23 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/12 07:47:47 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	rt;

	i = 0;
	rt = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
			rt = 0;
		}
		i++;
	}
	return (rt);
}