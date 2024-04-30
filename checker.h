/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 09:10:09 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/30 10:46:27 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "push_swap.h"
# include "get_next_line.h"

void	ft_check_moves(t_stack **a, t_stack **b, char *s);
char	*ft_check_is_sort(t_stack *a);
void	ft_checker(t_stack **a, t_stack **b);

#endif