/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comprobar_sol.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:46:08 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/17 20:58:22 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPROBAR_SOL_H
# define COMPROBAR_SOL_H

int	comprobar_arriba(int *arr, int table[4][4]);
int	comprobar_abajo(int *arr, int table[4][4]);
int	comprobar_dcha(int *arr, int table[4][4]);
int	comprobar_izda(int *arr, int table[4][4]);
int	comprobar_matriz(int *arr, int table[4][4]);
#endif
