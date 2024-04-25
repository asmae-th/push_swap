/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:17:27 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/25 22:30:07 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int *ft_copy(t_stack **a)
// {
//     t_stack *tmp;
//     int *T;
//     int i;
//     int siz;
//     tmp = *a;
//     siz  = size(a);	
//     i = 0;
//     T = (int *)malloc(siz * sizeof(int));	
//     while (tmp != NULL)
//     {
//         T[i] = tmp->data;
//         i++;
//         tmp = tmp->next;
//     }
//    // printf("siz1 %d\n",size_tab(T));
//     	  i = 0;
// 		while (i < size_tab(T))
// 		{
// 			printf("%d  \n",T[i]);
// 			i++;
// 		}
//     return (T);
// }

int	*ft_copy(t_stack **a)
{
	t_stack	*tmp;
	int		size;
	int		*t;
	int		i;

	tmp = *a;
	size = 0;
	while (tmp != NULL)
	{
		size++;
		tmp = tmp->next;
	}
	t = (int *)malloc(size * sizeof(int));
	if (t == NULL)
		return (NULL);
	tmp = *a;
	i = 0;
	while (tmp != NULL)
	{
		t[i] = tmp->data;
		i++;
		tmp = tmp->next;
	}
	return (t);
}

void	ft_sort_tab(int *t, int n)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	while (i < n)
	{
		tmp = t[i];
		j = i - 1;
		while (j >= 0 && t[j] > tmp)
		{
			t[j + 1] = t[j];
			j--;
		}
		t[j + 1] = tmp;
		i++;
	}
}

int	cherche_i_tab(int *tab, int v, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (tab[i] == v)
			break ;
		i++;
	}
	return (i);
}

void	ft_sort_100(t_stack **a, t_stack **b, int size)
{
	int	*tab;
	int	i_tab;
	int	count;

	count = 0;
	tab = ft_copy(a);
	if (!tab)
	{
		return ;
		free(tab);
	}
	ft_sort_tab(tab, size);
	while (count < size)
	{
		i_tab = cherche_i_tab(tab, (*a)->data, size);
		count = move_100(i_tab, count, a, b);
	}
	ft_push_b_to_a(a, b, size);
}

int	move_100(int i_tab, int count, t_stack **a, t_stack **b)
{
	if (i_tab < count)
	{
		pb(a, b);
		rb(b, 0);
		count++;
	}
	else if (i_tab <= count + 15)
	{
		pb(a, b);
		count++;
	}
	else
		ra(a, 0);
	return (count);
}
