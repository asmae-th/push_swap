/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   programm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmae <asmae@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:50:44 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/22 18:35:23 by asmae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_stack	*a;
	//t_stack	*b;
	int		i;
	char	*s;
	char	**ptr;
	long	nb;
	//int	*tab;

	i = 0;
	//b = NULL;
	if (ft_check_arg(ac, av) == 0 && ac >= 2)
	{
		s = arg_join(ac, av);
		if(check_spce(s))
			{
				write(1, "Error\n", 6);
				exit(0);
			}
		ptr = ft_split(s, ' ');
		// while (ptr[i])
		// {
		// 	if (ft_strlen(ptr[i]) > 11)
		// 	{
		// 		write(1, "Error\n", 6);
		// 		exit(0);
		// 	}
		// 	i++;
		// }
		while (*ptr)
		{
			nb = ft_atoi(*ptr);
			if (nb > 2147483647 || nb < -2147483648)
			{
				write(1, "Error\n", 6);
				exit(0);
			}
			i = nb;
		if(ft_dup(&a, nb) == 1)
		{
			write(1, "Error\n", 6);
				exit(0);
		}
			a = push(a, i);
			ptr++;
		}
		//ft_sort(&a,&b);
		// tab = ft_copy(&a);
		
		// while (i < 6)
		// {
		// 	printf("%d  \n",tab[i]);
		// 	i++;
		// }
		// ft_sort_tab(tab,6);
		// printf("--- mmm-----------\n");
		// int i = 0;
		// while (i < 6)
		// {
		// 	printf("%d  \n",tab[i]);
		// 	i++;
		// }
		
	//push_stack(&a, &b);
	//printf("yessss");
		//ft_sort(&a, &b);
		//ft_sort_three(&a);
		//rotate_invers_stack(&a);
		//printf("--- %d -----------\n",plus_petit(a));
		//push_stack(&a, &b);
		while (a)
		{
			printf("%d\n", a->data);
			a = a->next;
		}
		//
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
