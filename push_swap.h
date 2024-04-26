/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:54:48 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/26 20:31:44 by atahtouh         ###   ########.fr       */
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

void	ft_push_stack(t_stack **a, char **ptr);
void	ft_sort(t_stack **a, t_stack **b, int size);
//int		main(int ac, char *av[]);

t_stack	*push(t_stack *s, int v);
t_stack	*pop(t_stack *s);
int		size(t_stack **s);
int		ft_size_tab(char **ptr);
void	ft_exit(void);

int		ft_check_arg(int c, char **v);
char	*arg_join(int c, char **v);
int		ft_check_sort(t_stack *a);
int		check_spce(char *s);
int		ft_dup(t_stack **a, int nb);

int		ft_strlen(char *s);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *s);
char	*ft_strjoin(char *s1, char *s2);
void	*ft_memcpy(void *dst, void *src, int n);
char	*ft_substr(char *s, int start, int len);
char	**ft_split(char *s, char c);
long	ft_atoi(char *str);

int		plus_petit(t_stack *a);
void	ft_sort_too(t_stack *a);
void	ft_sort_three(t_stack **a);
void	ft_sort_five(t_stack **a, t_stack **b);

int		*ft_copy(t_stack **a);
void	ft_sort_tab(int *t, int n);
int		cherche_i_tab(int *tab, int v, int len);
void	ft_sort_100(t_stack **a, t_stack **b, int size);
int		move_100(int i_tab, int count, t_stack **a, t_stack **b);

int		plus_grand(t_stack *a);
int		ft_cherche_i_max(t_stack **b, int v);
void	ft_push_b_to_a(t_stack **a, t_stack **b, int size);
void	ft_sort_500(t_stack **a, t_stack **b, int size);
int		move_500(int i_tab, int count, t_stack **a, t_stack **b);

void	sa(t_stack *s, int n);
void	sb(t_stack *s, int n);
void	ss(t_stack *s1, t_stack *s2, int n);
void	pa(t_stack **s1, t_stack **s2);
void	pb(t_stack **s1, t_stack **s2);
void	ra(t_stack **s1, int n);
void	rb(t_stack **s1, int n);
void	rr(t_stack **s1, t_stack **s2, int n);
void	rra(t_stack **s1, int n);
void	rrb(t_stack **s1, int n);
void	rrr(t_stack **s1, t_stack **s2, int n);
#endif