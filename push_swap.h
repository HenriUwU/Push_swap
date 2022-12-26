/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:13:27 by hsebille          #+#    #+#             */
/*   Updated: 2022/12/26 15:15:22 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"

int		check_duplicate(int *stack_a);
int		*normalize(int *stack, int size);
void	swap_a(int *stack_a);
void	swap_b(int *stack_b);
void	swap_s(int *stack_a, int *stack_b);

#endif
