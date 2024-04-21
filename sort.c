/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:39:49 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/21 23:09:01 by atahtouh         ###   ########.fr       */
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
        sa(a);
}

void ft_sort_three(t_stack **a)
{
    if((*a)->next->data < (*a)->data && (*a)->data < (*a)->next->next->data)
        swap_stack(*a);
    if((*a)->data > (*a)->next->data && (*a)->next->data > (*a)->next->next->data)
    {
        swap_stack(*a);
        rotate_invers_stack(a);
    }
    if((*a)->next->data < (*a)->next->next->data && (*a)->next->next->data < (*a)->data )
        rotate_stack(a);
    if((*a)->data < (*a)->next->next->data && (*a)->next->next->data < (*a)->next->data )
    {
        swap_stack(*a);
        rotate_stack(a);
    }
    if((*a)->next->data < (*a)->data && (*a)->data < (*a)->next->data)
        rotate_invers_stack(a);
}

void ft_sort_five(t_stack **a, t_stack **b)
{
    
    while (size(a) > 3)
    {
        
        if ((*a)->data == plus_petit(*a))
        {
            //printf("    1 %p   \n",b);
            push_stack(a, b);
            //printf("yessss\n");
        }
        else
            rotate_stack(a);
    }
    
    ft_sort_three(a);
    push_stack(b, a);
    push_stack(b, a);
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
                push_stack(a, b);
                break;
            }
            else
            {
                rotate_stack(a);
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
           push_stack(b, a);
        }
        
        // while (*a)
		// {
		// 	printf("%d\n",(*a)->data);
		// 	(*a) = (*a)->next;
		// }
}