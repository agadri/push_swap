#include "push_swap.h"

void    if_100(t_stack *stack)
{
	while ((stack->len_s1 - 1) >= 0)
	{
		smaller_to_the_top(stack);
		pb(stack);
	}
	while ((stack->len_s2 - 1) >= 0)
		pa(stack);
}
