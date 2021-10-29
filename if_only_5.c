#include "push_swap.h"

int    find_next(t_stack *stack)
{
	int j;
	int s2;
	
	j = 0;
	s2 = stack->s2[stack->len_s2 - 1];
	while (j < stack->len_s1 - 1)
	{
		if (stack->s1[j] > s2  && stack->s1[j + 1] < s2)
			return (j);
		j++;
	}
	if (stack->s1[j] > s2  && stack->s1[0] < s2)
		return (j);
	if (stack->s1[stack->len_s1 - 1] > s2)
		return (where_is_smallest(stack));
	if (stack->s1[0] < s2)
		return (where_is_biggest(stack));
	return (0);
}

int	put_int_place(t_stack *stack)
{
	int ret;

	while (stack->len_s2 > 0)
	{
		ret = find_next(stack);
		while (ret  != stack->len_s1 - 1)
		{
			if (ret < stack->len_s1 / 2)
				rra(stack);
			else
				ra(stack);
			ret = find_next(stack);
		}
		pa(stack);
	}
	return (0);
}

void	smaller_to_the_top(t_stack *stack)
{
	stack->smaller = where_is_smallest(stack);
	while (stack->s1[stack->len_s1 - 1] != stack->s1[stack->smaller])
	{
		if (stack->smaller < stack->len_s1 / 2)
			rra(stack);
		else
			ra(stack);
		stack->smaller = where_is_smallest(stack);
	}
}

void	move_for_5(t_stack *stack)
{
	pb(stack);
	pb(stack);
	only_3(stack);
	put_int_place(stack);
	smaller_to_the_top(stack);
}


