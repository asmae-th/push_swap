/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:17:27 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/20 16:29:39 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int *ft_copy(t_stack **a)
{
    int *T;
    int i;
    int siz;
    
    siz  = size(a);
    i = 0;
    T = (int *)malloc(siz * sizeof(int));
    
    while (*a != NULL)
    {
        T[i] = (*a)->data;
        i++;
        *a = (*a)->next;
    }
    return (T);
}

void ft_sort_tab(int *t, int n)
{
    int i;
    int j;
    int tmp;

    i = 1;
    while(i < n)
    {
        tmp = t[i];
        j = i - 1;
        while(j >= 0 && t[j] > tmp)
        {
            t[j + 1] = t[j];
            j--;
        }
        t[j + 1] = tmp;
        i++;
    }
}
