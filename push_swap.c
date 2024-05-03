/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:50:44 by atahtouh          #+#    #+#             */
/*   Updated: 2024/05/02 09:21:44 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_stack *a)
{
	t_stack		*tmp;

	while (a)
	{
		tmp = a;
		a = a->next;
		free(tmp);
	}
}

void	ft_push_stack(t_stack **a, char **ptr)
{
	int			sz;
	long long	nb;
	int			i;

	sz = 0;
	sz = ft_size_tab(ptr) - 1;
	while (sz >= 0)
	{
		if (ft_check_len_int(ptr[sz]) > 11)
			ft_exit();
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
	if (ft_check_is_sort1(*a) == 1)
		exit (0);
	if (size == 2)
		ft_sort_too(*a);
	if (size == 3)
		ft_sort_three(a);
	if (size == 4)
		ft_sort_4(a, b);
	if (size == 5)
		ft_sort_five(a, b);
	if (size > 5 && size <= 100)
		ft_sort_100(a, b, size);
	if (size > 100)
		ft_sort_500(a, b, size);
}

int	ft_check_vide(char **av, int ac)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (ft_strlen1(av[i]) == 0 || check_spce(av[i]) == 1)
			return (1);
		i++;
	}
	return (0);
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
		if (ft_check_vide(av, ac) == 1)
			ft_exit();
		s = arg_join(ac, av);
		if (check_spce(s))
			ft_exit();
		ptr = ft_split(s, ' ');
		ft_push_stack(&a, ptr);
		ft_sort(&a, &b, size(&a));
	}
	else if (ac < 2)
		exit(0);
	else
		ft_exit();
	return (0);
}
