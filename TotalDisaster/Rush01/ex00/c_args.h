/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_args.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:13:21 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/17 20:42:37 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_ARGS_H
# define C_ARGS_H

# include <stdlib.h>

int		count_args(char *av);
void	char_to_int(char *av, int *arr);
int		check_inputs(int *arr, int size);
int		check_inputs2(int *arr, int size);
int		count_numbers(int *arr);

#endif
