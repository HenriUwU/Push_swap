/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:13:27 by hsebille          #+#    #+#             */
/*   Updated: 2023/01/05 17:11:20 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"

int		check_duplicate(int *stack_a);
int		*normalize(int *stack, int size);
int		ft_arrlen(int *stack);
int		read_and_stack(char **argv, int *stack_a, int *stack_b);
void	butterfly(int *stack_a, int *stack_b, int chunk);
void	sort(int *stack_a, int *stack_b);
void	swap_a(int *stack_a);
void	swap_b(int *stack_b);
void	swap_s(int *stack_a, int *stack_b);
void	push_a(int *stack_a, int *stack_b);
void	push_b(int *stack_a, int *stack_b);
void	rotate_a(int *stack_a);
void	rotate_b(int *stack_b);
void	rotate_r(int *stack_a, int *stack_b);
void	rrotate_a(int *stack_a);
void	rrotate_b(int *stack_b);
void	rrotate_r(int *stack_a, int *stack_b);

#endif
