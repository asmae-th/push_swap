/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   programm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmae <asmae@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:50:44 by atahtouh          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/04/24 12:28:43 by atahtouh         ###   ########.fr       */
=======
/*   Updated: 2024/04/22 18:35:23 by asmae            ###   ########.fr       */
>>>>>>> 7e79611e388556f6472f811e42940cd0198fb352
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
	int		sz;
	int	*tab;

<<<<<<< HEAD
	
	sz = 0;
	b = NULL;
=======
	i = 0;
	//b = NULL;
>>>>>>> 7e79611e388556f6472f811e42940cd0198fb352
	if (ft_check_arg(ac, av) == 0 && ac >= 2)
	{
		s = arg_join(ac, av);
		if(check_spce(s))
			{
				write(1, "Error\n", 6);
				exit(0);
			}
		ptr = ft_split(s, ' ');
		sz = ft_size_tab(ptr) - 1;
		while (sz >= 0)
		{
			nb = ft_atoi(ptr[sz]);
			if (nb > 2147483647 || nb < -2147483648)
			{
				write(1, "Error\n", 6);
				exit(0);
			}
			i = nb;
			if(ft_dup(&a, i) == 1)
			{
				write(1, "Error\n", 6);
					exit(0);
			}
			a = push(a, i);
			sz--;
		}
<<<<<<< HEAD
		//ft_sort_five(&a,&b);
		//ft_sort(&a,&b);
		 tab = ft_copy(&a);
		 ft_sort_tab(tab, size_tab(tab));
		// printf("%d  \n",size_tab(tab));
		 i = 0;
		while (i < size_tab(tab))
		{
			printf("%d  \n",tab[i]);
			i++;
		}
		ft_push(&a, &b, tab);
=======
		//ft_sort(&a,&b);
		// tab = ft_copy(&a);
		
		// while (i < 6)
		// {
		// 	printf("%d  \n",tab[i]);
		// 	i++;
		// }
>>>>>>> 7e79611e388556f6472f811e42940cd0198fb352
		// ft_sort_tab(tab,6);
		// printf("--- mmm-----------\n");
		// int i = 0;
		// while (i < 6)
		// {
		// 	printf("%d  \n",tab[i]);
		// 	i++;
		// }
		
	//push_stack(&a, &b);
	//printf("yessss\n");
		//ft_sort(&a, &b);
		//ft_sort_three(&a);
		//rotate_invers_stack(&a);
		//printf("--- %d -----------\n",plus_petit(a));
		//push_stack(&a, &b);
		
		// while (a)
		// {
		// 	printf("a = %d\n", a->data);
		// 	a = a->next; 
		// }
		
		// if(b == NULL)
		// 	printf("nuull");
		while (b)
		{
			printf("data = %d\n", b->data);
			b = b->next;
		}
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
