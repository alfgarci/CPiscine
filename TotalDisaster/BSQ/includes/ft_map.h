/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:09:26 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/27 15:11:34 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_H
# define FT_MAP_H

int		check_map(char **map, char e, char o, char f);
int		check_fl(char *str, char *empty, char *obs, char *full);
void	print_map(char **map);

#endif
