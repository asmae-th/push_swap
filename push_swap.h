/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:54:48 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/02 00:58:39 by atahtouh         ###   ########.fr       */
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
int		size(t_stack *s);

void	swap_t_stack(t_stack *s);
void	swap_same_time(t_stack *s1, t_stack *s2);
void	push_t_stack(t_stack **s1, t_stack **s2);
void	rotate_t_stack(t_stack **s1);
void	rotate_same_time(t_stack **s1, t_stack **s2);

int		ft_check_arg(int c, char **v);
char	*arg_join(int c, char **v);

int		ft_strlen(char *s);
char	*ft_strdup(char *s);
char	*ft_strjoin(char *s1, char *s2);
void	*ft_memcpy(void *dst, void *src, int n);
char	*ft_substr(char *s, int start, int len);
char	**ft_split(char *s, char c);
long	ft_atoi(char *str);

#endif