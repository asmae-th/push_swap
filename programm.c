/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   programm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:50:44 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/26 20:35:42 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_stack(t_stack **a, char **ptr)
{
	int			sz;
	long long	nb;
	int			i;

	sz = 0;
	sz = ft_size_tab(ptr) - 1;
	while (sz >= 0)
	{
		nb = ft_atoi(ptr[sz]);
		if (nb > 2147483647 || nb < -2147483648)
			ft_exit();
		i = nb;
		if (ft_dup(a, i) == 1)
			ft_exit();
		*a = push(*a, i);
		sz--;
	}
}
void	ft_sort(t_stack **a, t_stack **b, int size)
{
	if (size == 2)
		ft_sort_too(*a);
	if (size == 3)
		ft_sort_three(a);
	if (size == 5)
		ft_sort_five(a, b);
	if (size > 5 && size <= 100)
		ft_sort_100(a, b, size);
	if (size > 100)
		ft_sort_500(a, b, size);
}
int	main(int ac, char *av[])
{
	t_stack		*a;
	t_stack		*b;
	char		*s;
	char		**ptr;

	b = NULL;
	if (ft_check_arg(ac, av) == 0 && ac >= 2)
	{
		s = arg_join(ac, av);
		if (check_spce(s))
			ft_exit();
		ptr = ft_split(s, ' ');
		ft_push_stack(&a, ptr);
		ft_sort(&a, &b, size(&a));
		// while (a)
		// {
		// 	printf("a = %d\n", a->data);
		// 	a = a->next; 
		// }
	}
	else
		ft_exit();
	return (0);
}
		
		// while (b)
		// {
		// 	printf("data = %d\n", b->data);
		// 	b = b->next;
		// }
				// sz = ft_size_tab(ptr) - 1;
		// while (sz >= 0)
		// {
		// 	nb = ft_atoi(ptr[sz]);
		// 	if (nb > 2147483647 || nb < -2147483648)
		// 		ft_exit();
		// 	i = nb;
		// 	if (ft_dup(&a, i) == 1)
		// 		ft_exit();
		// 	a = push(a, i);
		// 	sz--;
		// }