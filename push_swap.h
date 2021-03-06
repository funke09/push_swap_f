/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:01:39 by zcherrad         #+#    #+#             */
/*   Updated: 2022/07/03 22:44:17 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

typedef struct Stack
{
	int		*array_a;
	int		*array_b;
	int		*array_s;
	int		size;
	int		size_a;
	int		size_b;
	int		last_a;
	int		last_b;
	int		head_a;
	int		head_b;
}		t_stack;

/******* libft *******/

size_t	ft_strlen(const	char *s);
char	*ft_strchr(char *s, int c);
void	ft_putstr(char *s);
long	ft_atoi(const char *str);
int		ft_isdigit(int c);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*get_next_line(int fd);
int		*ft_swap(int *a, int *b);

/********* parse ********/

int		check_array(char **tab);
char	**get_args(int ac, char **av);
int		check_args(char **tab);
char	**parse_to_stack(int ac, char **av, int *i);

/********* stack *********/
void	init_stacks(int size, t_stack *tab);
void	push(t_stack *array, int value, int i);
int		is_sortd(t_stack *array);
void	sort_array_s(t_stack *array);
void	bubble(int *arr, int n);

/******** instructions  *****/
void	sa(t_stack *stack, char *str);
void	pa(t_stack *stack, char *str);
void	ra(t_stack *stack, char *str);
void	rra(t_stack *stack, char *str);
void	sb(t_stack *stack, char *str);
void	pb(t_stack *stack, char *str);
void	rb(t_stack *stack, char *str);
void	rrb(t_stack *stack, char *str);
void	rr(t_stack *array, char *str);
int		get_minimum(t_stack *array);
int		get_maximum(t_stack *array);
int		get_maximum_a(t_stack *array);
int		get_idx(t_stack *array);

/********* sort ***********/
void	sort_2(t_stack *array);
void	sort_3(t_stack *array);
void	sort_5(t_stack *stack);
void	sort_100_nd_500(t_stack *array, int d);

#endif
