#include "push_swap.h"

int    where_is_biggest(t_stack *stack)
{
	int i;
	int pos;

	i = 1;
	pos = 0;
	while (i < stack->len_s1)
	{
		if (stack->s1[pos] < stack->s1[i])
			pos = i;
		i++;
	}
	printf("biggest %d\n ", pos);
	return (pos);
}

int    where_is_smallest(t_stack *stack)
{
	int i;
	int pos;

	i = 1;
	pos = 0;
	while (i < stack->len_s1)
	{
		if (stack->s1[pos] > stack->s1[i])
			pos = i;
		i++;
	}
	printf("smallest %d\n ", pos);
	return (pos);
}

void    only_3(t_stack *stack)
{
	stack->bigger = where_is_biggest(stack);
	stack->smaller = where_is_smallest(stack);

	if ((stack->bigger == 0) & (stack->smaller == 1))
		sa(stack);
	if ((stack->bigger == 2) & (stack->smaller == 0))
	{
		sa(stack);
		rra(stack);
	}
	if ((stack->bigger == 2) & (stack->smaller == 1))
		ra(stack);
	if ((stack->bigger == 1) & (stack->smaller == 2))
	{
		sa(stack);
		ra(stack);
	}
	if ((stack->bigger == 1) & (stack->smaller == 0))
		rra(stack);
}
