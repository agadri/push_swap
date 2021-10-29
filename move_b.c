#include "push_swap.h"

void	pb(t_stack *stack)
{
	stack->s2[stack->len_s2] = stack->s1[stack->len_s1 - 1];
	stack->len_s1 -= 1;
	stack->len_s2 += 1;
	printf("%s\n" , "pb");
}


void    rrb(t_stack *stack)
{
	int i = 0;
	int j;

	j = stack->len_s2 - 1;
	ft_swap(&stack->s2[j], &stack->s2[0]);
	while (i < j - 1)
	{
		ft_swap(&stack->s2[i],&stack->s2[i + 1]);
		i++;
	}
	printf("%s\n" , "rrb");	
}

void	sb(t_stack *stack)
{
	ft_swap(&stack->s2[stack->len_s2 - 1],&stack->s2[stack->len_s2 - 2]);
	printf("%s\n" , "sb");
}

void    rb(t_stack *stack)
{
	int j;

	j = stack->len_s2 - 1;
	ft_swap(&stack->s2[j], &stack->s2[0]);
	while (j > 1)
	{
		ft_swap(&stack->s2[j],&stack->s2[j - 1]);
		j--;
	}
	printf("%s\n" , "rb");	
}