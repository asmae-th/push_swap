/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   programm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:50:44 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/19 12:46:06 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_stack	*a;
	t_stack	*b;
	int		i;
	char	*s;
	char	**ptr;
	long	nb;

	i = 0;
	b = NULL;
	if (ft_check_arg(ac, av) == 0 && ac >= 2)
	{
		s = arg_join(ac, av);
		if(check_spce(s))
			{
				write(1, "Error\n", 6);
				exit(0);
			}
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
	//push_stack(&a, &b);
	//printf("yessss");
		ft_sort(&a, &b);
		//ft_sort_three(&a);
		//rotate_invers_stack(&a);
		//printf("--- %d -----------\n",plus_petit(a));
		//push_stack(&a, &b);
		while (a)
		{
			printf("%d\n", a->data);
			a = a->next;
		}
		printf("--- mmm-----------\n");
		// if(b == NULL)
		// 	printf("nuull");
		// while (b)
		// {
		// 	printf("%d\n", b->data);
		// 	b = b->next;
		// }
		// if(ft_check_sort(a) == 0)
		// 	printf("ok");
		// else
		// 	printf("ko");
		//printf("min = %d",plus_petit(&a));
	}
	else
		write (1, "Error\n", 6);
	return (0);
}
