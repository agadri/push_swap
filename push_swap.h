/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:18:07 by adegadri          #+#    #+#             */
/*   Updated: 2021/10/29 16:10:22 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct	s_stack 
{
	int len_tot;
	int len_s1;
	int len_s2;
	
	int *s1;
	int *s2;
	int bigger;
	int smaller;
}				t_stack;

void	init_value(t_stack *stack, int ac);
int		ft_atoi(const char *str);
void	aff(t_stack *stack);
int		where_is_biggest(t_stack *stack);
int		where_is_smallest(t_stack *stack);
void	ft_swap(int *a, int *b);
void	pa(t_stack *stack);
void	pb(t_stack *stack);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	only_3(t_stack *stack);
int		find_next(t_stack *stack);
void	smaller_to_the_top(t_stack *stack);
int		put_int_place(t_stack *stack);
void	move_for_5(t_stack *stack);
//void	if_100(t_stack *stack);

#endif
