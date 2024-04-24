/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:17:27 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/24 11:17:52 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *ft_copy(t_stack **a)
{
    t_stack *tmp;
    int *T;
    int i;
    int siz;
    
    tmp = *a;
    siz  = size(a);
    i = 0;
    T = (int *)malloc(siz * sizeof(int));
    
    while (tmp)
    {
        T[i] = tmp->data;
        i++;
        tmp = tmp->next;
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

int size_tab(int *t)
{
    int i;
    
    i = 0;
    while(t[i])
        i++;
    return (i);
}
void    ft_push_b(t_stack **b,t_stack **a, int mid1)
{
    if (*b == NULL)
        pb(a,b);
    if (*a != NULL)
    {
       // if((*a)->data == mid1)
            
        if((*a)->data >= mid1)
            pb(a, b);
        if((*a)->data < mid1)
            {
                pb(a, b);
                rb(b, 0);
            }
    }
}

void    ft_push(t_stack **a, t_stack **b, int *t)
{
    int mid;
    int offset;
    int start;
    int end;
    int i;
    
    mid = (size_tab(t) / 2) - 1;
    printf("mid %d\n",mid);
    offset = size_tab(t) / t[mid];
    printf("offset %d\n",offset);
    start   = mid - offset - 1;
    printf("start %d\n",start);
    end = mid + offset + 1;
    printf("end %d\n",end);
    while(*a != NULL)
    {
        i = 0;
        while (i < (end - start + 1))
        {
            if (((*a)->data >= t[start]) &&( (*a)->data <= t[end]))
            {
                ft_push_b(b,a,t[mid]);
               // printf(" i = %d\n",i);
            }
            else
                ra(a, 0);
            i++;
        }
        end = end + offset;
        start =  start - offset;
        if ( start < 0)
            start = 0;
        *a = (*a)->next;
    }
}