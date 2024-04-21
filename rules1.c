/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 23:06:08 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/21 23:11:19 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *s)
{
	int	tmp;

	tmp = s->data;
	s->data = s->next->data;
	s->next->data = tmp;
	write(1,"sa\n",3);
}
void	sa(t_stack *s)
{
	int	tmp;

	tmp = s->data;
	s->data = s->next->data;
	s->next->data = tmp;
	write(1,"ab\n",3);
}