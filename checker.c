/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:10:17 by atahtouh          #+#    #+#             */
/*   Updated: 2024/05/01 21:12:18 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_free(t_stack *a)
{
	t_stack	*tmp;

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

char	*ft_check_is_sort(t_stack *a)
{
	while (a->next != NULL)
	{
		if (a->data > a->next->data)
		{
			return ("KO\n");
			break ;
		}
		a = a->next;
	}
	return ("OK\n");
}

int	ft_check_vide(char **av, int ac)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (ft_strlen(av[i]) == 0 || check_spce(av[i]) == 1)
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
		ft_checker(&a, &b);
	}
	else if (ac < 2)
		exit(0);
	else
		ft_exit();
	return (0);
}
