#include "push_swap.h"

void	init_value(t_stack *stack, int ac)
{
	stack->len_tot = ac;
	stack->len_s1 = ac;
	stack->len_s2 = 0;
}

void	aff(t_stack *stack)
{
	int i;
	int j;

	i = stack->len_s1 - 1;
	while (i >= 0)
	{
		printf("apres s1:%d position %d\n",stack->s1[i] , i);
		i--;
	}
	j = stack->len_s2 - 1;
	while (j >= 0)
	{
		printf("apres s2 :%d  position %d\n",stack->s2[j] , j);
		j--;
	}
}