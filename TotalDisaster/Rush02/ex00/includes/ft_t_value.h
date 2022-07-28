/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_t_value.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <alfgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:06:36 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/24 16:34:25 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_T_VALUE_H
# define FT_T_VALUE_H
# include "ft_strings.h"
# include <fcntl.h>
# include <stdio.h>

typedef struct s_value
{
	char	*num;
	char	*name;
}		t_value;

t_value	**parse_dict(char *file);

#endif
