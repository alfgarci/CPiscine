/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <alfgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 08:48:42 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/24 20:54:41 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRINGS_H
# define FT_STRINGS_H
# include <stdlib.h>
# include <unistd.h>

int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	**ft_split(char *str, char *charset);

#endif
