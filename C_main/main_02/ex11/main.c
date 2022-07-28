/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:41:15 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/14 00:20:55 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str);

int main()
{
	char cadena[] = "Hola\n\v\rAsdasd123";
	ft_putstr_non_printable(cadena);
	
}
