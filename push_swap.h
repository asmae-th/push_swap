/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmae <asmae@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:54:48 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/22 13:38:37 by asmae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef struct t_stack
{
	int				data;
	struct t_stack	*next;
}	t_stack;

t_stack	*push(t_stack *s, int v);
t_stack	*pop(t_stack *s);
int		size(t_stack **s);

void	swap_stack(t_stack *s);
void	swap_same_time(t_stack *s1, t_stack *s2);
void	push_stack(t_stack **s1, t_stack **s2);
void	rotate_stack(t_stack **s1);
void	rotate_same_time(t_stack **s1, t_stack **s2);
void	rotate_invers_stack(t_stack **s1);

int		ft_check_arg(int c, char **v);
char	*arg_join(int c, char **v);
int		ft_check_sort(t_stack *a);
int check_spce(char *s);
int ft_dup(t_stack **a, int nb);

int		ft_strlen(char *s);
int	ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *s);
char	*ft_strjoin(char *s1, char *s2);
void	*ft_memcpy(void *dst, void *src, int n);
char	*ft_substr(char *s, int start, int len);
char	**ft_split(char *s, char c);
long	ft_atoi(char *str);

int plus_petit(t_stack *a);
void ft_sort_too(t_stack *a);
void ft_sort_three(t_stack **a);
void ft_sort_five(t_stack **a, t_stack **b);
void ft_sort(t_stack **a, t_stack **b);


int *ft_copy(t_stack **a);
void ft_sort_tab(int *t, int n);


void	sa(t_stack *s, int n);
void	sb(t_stack *s, int n);
void	ss(t_stack *s1, t_stack *s2,int n);
void	pa(t_stack **s1, t_stack **s2);
void	pb(t_stack **s1, t_stack **s2);
void	ra(t_stack **s1, int n);
void	rb(t_stack **s1, int n);
void	rr(t_stack **s1, t_stack **s2, int n);
void	rra(t_stack **s1, int n);
void	rrb(t_stack **s1, int n);
void	rrr(t_stack **s1, t_stack **s2, int n);
#endif