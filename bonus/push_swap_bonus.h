/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:49:42 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/28 12:48:23 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H
# include "../src/push_swap.h"

//--------------------CHECKERS------------------------//
void	check_input(int argc, char **argv);
void	check_input_and_split(char *argv);
void	check_input_and_movements(t_node **stack);
void	input_movements(char *str, t_node **list_a, t_node **list_b);
//---------------------ARRAY--------------------------//
void	make_array(char **str);
//---------------------STACK--------------------------//
t_node	**make_stack(int *array, int size);
//------------------DO MOVEMENTS----------------------//
void	do_swap(t_node **list_a, t_node **list_b, char *str);
void	do_rotate(t_node **list_a, t_node **list_b, char *str);
void	do_reverse_rotate(t_node **list_a, t_node **list_b, char *str);
void	do_push(t_node **list_a, t_node **list_b, char *str);
//----------------------ATOL--------------------------//
long	ft_atol(char *str);
void	ft_check_limits(long nbr);
//---------------------FREE--------------------------//
void	ft_error(t_node **stack_a, t_node **stack_b);
//---------------------UTILS--------------------------//
int		ft_is_sorted(t_node *stack);
int		ft_repeat_nbr(int *array, int len);
char	*ft_strjoin_ps(char *s1, char *s2);
int		ft_list_size(t_node *stack);
//-------------------MOVEMENTS-----------------------//
void	swap(t_node **stack);
void	sa(t_node **stack_a);
void	sb(t_node **stack_b);
void	ss(t_node **stack_a, t_node **stack_b);
void	push(t_node **src, t_node **dst);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);
void	rotate(t_node **stack);
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	rr(t_node **stack_a, t_node **stack_b);
void	rev_rot(t_node **stack);
void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);
void	rrr(t_node **stack_a, t_node **stack_b);

#endif