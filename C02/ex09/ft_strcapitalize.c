/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 06:05:43 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/19 22:10:19 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha(char c)
{
	int	i;

	i = 0;
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		i = 1;
	}
	return (i);
}

int	ft_is_numeric(char c)
{
	int	i;

	i = 0;
	if (c >= 48 && c <= 57)
	{
		i = 1;
	}
	return (i);
}

char	ft_lowcase(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	return (c);
}

char	ft_upcase(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] != '\0')
	{
		str[0] = ft_upcase(str[0]);
	}
	while (str[i] != '\0')
	{
		if ((!ft_is_alpha(str[i - 1]) && !ft_is_numeric(str[i - 1])))
		{
			if (ft_is_alpha(str[i]))
			{
				str[i] = ft_upcase(str[i]);
			}
		}
		else
		{
			str[i] = ft_lowcase(str[i]);
		}
		i++;
	}
	return (str);
}
