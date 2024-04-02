/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   programm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:50:44 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/02 03:50:41 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_stack	*a;
	int		i;
	char	*s;
	char	**ptr;
	long	nb;

	i = 0;
	if (ft_check_arg(ac, av) == 0)
	{
		s = arg_join(ac, av);
		ptr = ft_split(s, ' ');
		while (ptr[i])
		{
			if (ft_strlen(ptr[i]) > 11)
			{
				write(1, "Error\n", 6);
				exit(0);
			}
			i++;
		}
		while (*ptr)
		{
			nb = ft_atoi(*ptr);
			if (nb > 2147483647 || nb < -2147483648)
			{
				write(1, "Error\n", 6);
				exit(0);
			}
			i = nb;
			a = push(a, i);
			ptr++;
		}
		while (a)
		{
			printf("%d\n", a->data);
			a = a->next;
		}
	}
	else
		write (1, "Error\n", 6);
	return (0);
}
