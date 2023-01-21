/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:13:27 by hsebille          #+#    #+#             */
/*   Updated: 2023/01/21 11:23:34 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# define BUFFER_SIZE 1

int		check_duplicate(int *stack_a);
int		*normalize(int *stack, int size);
int		ft_arrlen(int *stack);
int		*into_stack(char **strs, int size);
int		is_sorted(int *stack_a, int *stack_b);
int		side_function(int *stack_a);
char	**into_array(int argc, char **argv);
char	*get_next_line(int fd);
void	sort_bonus(int *stack_a, int *stack_b);
void	sort_two(int *stack_a);
void	sort_three(int *stack_a, int *stack_b);
void	sort_five(int *stack_a, int *stack_b);
void	main_sort(int *stack_a, int *stack_b, int chunk, int max);
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
void	swap_bonus(int *stack);
void	swap_s_bonus(int *stack_a, int *stack_b);
void	push_b_bonus(int *stack_a, int *stack_b);
void	push_a_bonus(int *stack_a, int *stack_b);
void	rotate_bonus(int *stack);
void	rotate_r_bonus(int *stack_a, int *stack_b);
void	rrotate_bonus(int *stack);
void	rrotate_r_bonus(int *stack_a, int *stack_b);

#endif
