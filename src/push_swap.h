/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:49:24 by tanselmo          #+#    #+#             */
/*   Updated: 2024/04/01 12:22:24 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../Libft/libft.h"

typedef struct s_node
{
	int				data;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_node	*next;
}		t_node;
//----------------------ERROR-------------------------//
void	ft_error(t_node **stack_a, t_node **stack_b);
void	print_error(void);
//--------------------CHECKERS------------------------//
char	*ft_checker(int argc, char **argv);
int		ft_check_sign(char *str);
int		ft_nbr_spaces(char *str);
int		ft_sign_after_nbr(char *str, int i);
int		ft_all_spaces(char	*str);
//-------------------CONVERSIONS----------------------//
void	ft_conversion(int argc, char **argv);
void	ft_conversion_one(char *str);
//-----------------INTEGER ARRAY----------------------//
void	ft_make_array(char **str);
int		ft_repeat_nbr(int *array, int len);
//-------------------MAKE LIST------------------------//
t_node	**ft_make_stack(int *array, int len);
//----------------------ATOL--------------------------//
long	ft_atol(char *str);
void	ft_check_limits(long nbr);
//-------------------STRJOIN_PS----------------------//
char	*ft_strjoin_ps(char *s1, char *s2);
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
//------------------MAKE MOVS-----------------------//
void	ft_make_movs(t_node **a, t_node **b, t_node *low_cost_node);
void	mov_rr(t_node **stack_a, t_node **stack_b, int *cost_a, int *cost_b);
void	mov_rrr(t_node **stack_a, t_node **stack_b, int *cost_a, int *cost_b);
void	mov_ra(t_node **stack_a, int *cost_a);
void	mov_rb(t_node **stack_b, int *cost_b);
void	mov_rra(t_node **stack_a, int *cost_a);
void	mov_rrb(t_node **stack_b, int *cost_b);
//---------------------SORT-------------------------//
void	ft_sort(t_node **stack_a, int len);
void	ft_sort_three(t_node **stack_a);
void	ft_sort_bigstack(t_node	**stack_a, int index_max);
int		ft_is_sorted(t_node *stack);
void	ft_bucle_sort(t_node **stack_a, t_node **stack_b);
int		ft_lowest_to_top(t_node **stack_a);
//---------------------INDEX------------------------//
void	ft_index(t_node **stack);
int		ft_get_index(t_node *stack, int num);
//-------------------LIST SIZE----------------------//
int		ft_list_size(t_node *stack);
//-------------------POSIITON-----------------------//
void	ft_position(t_node **stack);
void	ft_target_pos(t_node **stack_a, t_node **stack_b);
int		find_smallest_pos(t_node **stack_a);
//---------------------COST-------------------------//
void	ft_cost(t_node **stack_a, t_node **stack_b);
void	ft_get_low_cost(t_node **stack_a, t_node **stack_b);
int		ft_absolute(int start, int end);
int		ft_absolute_b(int start, int end);
//---------------------FREE-------------------------//
char	*free_str(char *str);
void	free_matrix(char **matrix);
void	free_stack(t_node **stack);
void	ft_free_and_error(int *res);

#endif