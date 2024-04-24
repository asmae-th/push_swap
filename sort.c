/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmae <asmae@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:39:49 by atahtouh          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/04/23 10:48:39 by atahtouh         ###   ########.fr       */
=======
/*   Updated: 2024/04/22 13:57:09 by asmae            ###   ########.fr       */
>>>>>>> 7e79611e388556f6472f811e42940cd0198fb352
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int plus_petit(t_stack *a)
{
    t_stack *h;
    int tmp;

    tmp = (a)->data;
    h = (a)->next;
    while (h != NULL)
    {
        if( h->data < tmp)
            tmp = h->data;
        a = h;
        h = h->next;
    }
    return tmp;
}

void ft_sort_too(t_stack *a)
{  
    if(a->data > a->next->data)
        sa(a, 0);
}

void ft_sort_three(t_stack **a)
{
    if((*a)->next->data < (*a)->data && (*a)->data < (*a)->next->next->data)
        sa(*a, 0);
    if((*a)->data > (*a)->next->data && (*a)->next->data > (*a)->next->next->data)
    {
        sa(*a, 0);
        rra(a, 0);
    }
    if((*a)->next->data < (*a)->next->next->data && (*a)->next->next->data < (*a)->data )
        ra(a, 0);
    if((*a)->data < (*a)->next->next->data && (*a)->next->next->data < (*a)->next->data )
    {
        sa(*a, 0);
        ra(a, 0);
    }
<<<<<<< HEAD
    if(((*a)->data < (*a)->next->data) && (*a)->next->next->data < (*a)->data )
=======
    if((*a)->next->data < (*a)->data && (*a)->data < (*a)->next->data)
>>>>>>> 7e79611e388556f6472f811e42940cd0198fb352
        rra(a, 0);
}

void ft_sort_five(t_stack **a, t_stack **b)
{
    while (size(a) > 3)
    {
        if ((*a)->data == plus_petit(*a))
<<<<<<< HEAD
            pb(a, b);
=======
        {
            //printf("    1 %p   \n",b);
            pb(a, b);
            //printf("yessss\n");
        }
>>>>>>> 7e79611e388556f6472f811e42940cd0198fb352
        else
            ra(a, 0);
    }
    ft_sort_three(a);
    pa(b, a);
    pa(b, a);
}


// void ft_sort(t_stack **a, t_stack **b)
// {
//     int tmp;

//     while (*a)
//     {
//         tmp = plus_petit(*a);
//         while (*a)
//         {
//             if((*a)->data == tmp)
//                 push_stack(a, b);
//             else
//                 rotate_stack(a);
//         }
//     }
// }

// void ft_sort(t_stack **a, t_stack **b) {
//     int tmp;

//     while (*a != NULL) {
//         tmp = plus_petit(*a);
//         while (*a != NULL) {
//             if ((*a)->data == tmp)
//                 push_stack(a, b);
//             else
//                 rotate_stack(a);
//         }
//     }
// }
void ft_sort(t_stack **a, t_stack **b)
{
    int tmp;

    while (*a != NULL)
    {
        tmp = plus_petit(*a);
        while (*a != NULL) {
            if ((*a)->data == tmp)
            {
                pb(a, b);
                break;
            }
            else
            {
                ra(a ,0);
                break; 
            }
        }
    }
    //   while (*b)
	// 	{
	// 		printf("%d\n",(*b)->data);
	// 		(*b) = (*b)->next;
	// 	}
    
        while (*b != NULL)
        {
           pa(b, a);
        }
        
        // while (*a)
		// {
		// 	printf("%d\n",(*a)->data);
		// 	(*a) = (*a)->next;
		// }
}