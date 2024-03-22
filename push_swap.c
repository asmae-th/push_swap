#include "push_swap.h"
int main()
{
    mystack *s1;
    //,*s2;
    s1 = create_stack(10);
    //s2 = create_stack(10);
    push(s1,5);
    push(s1,9);
    push(s1,10);
    push(s1,20);
    // push(s2,1);
    // push(s2,2);
    // push(s2,3);
    // push(s2,4);
    //printf(" %d popped from stack \n",pop(s1));
    // printf(" %d popped from stack \n",pop(s1));
    // printf(" %d popped from stack \n",pop(s1));

   // printf(" valeur = %d \n",s1->stack[-1]);
    //s1(s1,4);
    // sb(s2,4);
    ra(s1);
   // pop(s1);
    
    
    // while (s2->top != NULL)
    // {
    //     printf(" valeur = %d \n",s2->top->data);
    //     s2->top = s2->top->next;
    //     //s1->size--;
    // }
    // printf("\n\n");
    while (s1->top != NULL)
    {
        printf(" valeur = %d \n",s1->top->data);
        s1->top = s1->top->next;
        //s1->size--;
    }
   // printf("%d\n",s1->sommet);
}  