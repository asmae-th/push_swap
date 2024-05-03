/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 10:09:13 by atahtouh          #+#    #+#             */
/*   Updated: 2024/05/02 09:51:11 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_len_int(char *str)
{
	int	i;

	i = 0;
	while (str)
	{
		if (*str == '0')
			str++;
		else
			break ;
		i++;
	}
	return (ft_strlen1 (str));
}
