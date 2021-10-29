#include "push_swap.h"

int	main(int ac, char **ag)
{
	int	i;
	int	j;
	t_stack stack;

	j = ac - 1;
	init_value(&stack, j);
	stack.s1 = malloc(sizeof(int) * stack.len_tot);
	if (!stack.s1)
		return (0);
	stack.s2 = malloc(sizeof(int) * stack.len_tot);
	if (!stack.s2)
		return (0);
	i = 0;
	while (j > 0)
	{
		stack.s1[i] = ft_atoi(ag[j]);
		j--;
		i++;
	}
	if (stack.len_tot == 3)
		only_3(&stack);
	if (stack.len_tot == 5)
		move_for_5(&stack);
	//if (stack.len_tot == 100)
		//if_100(&stack);
	aff(&stack);
	return 0; 
}
