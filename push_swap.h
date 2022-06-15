/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:41:55 by wrickard          #+#    #+#             */
/*   Updated: 2021/10/17 15:20:51 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				content;
	int				flag;
	int				sort;
	struct s_list	*prev;
	struct s_list	*next;
}					t_list;

typedef struct s_nod
{
	struct s_list	*lasta;
	struct s_list	*bega;
	struct s_list	*lastb;
	struct s_list	*begb;
	int				max;
	int				min;
}					t_nod;

int		check_nbr(char **str);
int		check(t_list **st_a);
int		check_repeat(int *str, int size);
void	st_add_back(t_list **st_a, t_list *new);
int		sort_put_ind(t_list **st_a, int **str, int size);
void	sort_to_b(t_list **st_a, t_list **st_b, int ind, int count);

long	ft_atoi(const char *str);
size_t	ft_strlen(const char *str);
int		ft_putstr(char *s);
int		ft_list_size(t_list *begin_list);
void	st_add_front(t_list **st_a, t_list *new);
void	ss(t_list **stb, char *str);

void	push_to_st_b(t_list **list_a, t_list **list_b, char *str);
void	ra_rb_rr(t_list **list_ra, char *str);
void	rrr(t_list **st_a, char *str);
t_list	*ft_list_last(t_list *begin_list);
int		*sort_int_nbr_str(int *numb_str, int size);

int		up_lst(t_list *st_a, int i);
t_list	*stack_new(int content);
int		put_index(int i);
void	ind_of(int *str, t_list **st_a, int size);
void	start_sort(t_list **st_a);
void	sort_up(t_list **st_a, t_list **st_b, int up, int down);

void	finish_sort(t_list **st_a, t_list **st_b);
void	ft_list_clear(t_list **begin_list);
int		clear_exit(int *numb_str, t_list *st_a, int flag);

#endif
