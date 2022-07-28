/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:49:59 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/17 20:57:58 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TABLE_H
# define TABLE_H

void	init_table(int *arr, int table[4][4]);
void	print_table(int tab[4][4]);
void	fill_base1(int *arr_tmp, int table[4][4], int pos);
void	fill_base4(int *arr_tmp, int table[4][4], int pos);
void	fill_base32(int *arr, int table[4][4]);
#endif
