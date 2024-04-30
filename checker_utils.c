/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 10:30:34 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/30 12:12:02 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_check_moves(t_stack **a, t_stack **b, char *s)
{
	if (ft_strcmp(s, "sa\n") == 0)
		sa(*a, 1);
	else if (ft_strcmp(s, "sb\n") == 0)
		sb(*b, 1);
	else if (ft_strcmp(s, "ss\n") == 0)
		ss(*a, *b, 2);
	else if (ft_strcmp(s, "ra\n") == 0)
		ra(a, 1);
	else if (ft_strcmp(s, "rb\n") == 0)
		rb(b, 1);
	else if (ft_strcmp(s, "rr\n") == 0)
		rr(a, b, 2);
	else if (ft_strcmp(s, "rra\n") == 0)
		rra(a, 1);
	else if (ft_strcmp(s, "rrb\n") == 0)
		rrb(b, 1);
	else if (ft_strcmp(s, "rrr\n") == 0)
		rrr(a, b, 2);
	else if (ft_strcmp(s, "pa\n") == 0)
		pa(b, a, 1);
	else if (ft_strcmp(s, "pb\n") == 0)
		pb(a, b, 1);
	else
		ft_exit();
}

void	ft_checker(t_stack **a, t_stack **b)
{
	char	*str;
	char	*c;
	int		len;

	len = size(a);
	str = get_next_line(1);
	while (str)
	{
		ft_check_moves(a, b, str);
		free(str);
		str = get_next_line(1);
	}
	if (size(a) != len)
	{
		ft_free(*a);
		write(1, "KO\n", 3);
	}
	else
	{
		c = ft_check_is_sort(*a);
		write(1, c, 3);
	}
}
