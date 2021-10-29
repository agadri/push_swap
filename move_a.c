#include "push_swap.h"

void	pa(t_stack *stack)
{
	stack->s1[stack->len_s1] = stack->s2[stack->len_s2 - 1];
	stack->len_s2 -= 1;
	stack->len_s1 += 1;
	printf("%s\n" , "pa");
}

void	rra(t_stack *stack)
{
	int i = 0;
	int j;

	j = stack->len_s1 - 1;
	ft_swap(&stack->s1[j], &stack->s1[0]);
	while (i < j - 1)
	{
		ft_swap(&stack->s1[i],&stack->s1[i + 1]);
		i++;
	}
	printf("%s\n" , "rra");	
}

void	sa(t_stack *stack)
{
	ft_swap(&stack->s1[stack->len_s1 - 1],&stack->s1[stack->len_s1 - 2]);
	printf("%s\n" , "sa");
}

void	ra(t_stack *stack)
{
	int j;

	j = stack->len_s1 - 1;
	ft_swap(&stack->s1[j], &stack->s1[0]);
	while (j > 1)
	{
		ft_swap(&stack->s1[j],&stack->s1[j - 1]);
		j--;
	}
	printf("%s\n" , "ra");
}