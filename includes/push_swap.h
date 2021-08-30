#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

// typedef enum s_action {sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr} t_action;

// typedef struct s_list_actions
// {
// 	t_action				action;
// 	struct s_list_actions	*nxt;
// }	t_list_actions;

typedef struct	s_list
{
	int				nbr;
	int				index;	//индекс числа в отсортированном списке
	int				flag;	//флаг, что этот элемент уже был в стэке Б
	struct s_list	*prev;
	// struct s_list	*begin;
	// struct s_list	*end;
	struct s_list	*next;
}				t_list;
// typedef struct	s_stack
// {
// 	t_list *a;
// 	t_list *b;
// }				t_stack;

void	sa_sb_ss(t_list **list_sa);
void	push_to_a(t_list **list_b, t_list **list_a);
void	push_to_b(t_list **list_a, t_list **list_b);
void	ra_rb_rr(t_list **list_ra);
void	rra_rrb_rrr(t_list **list_rra);

void	sort_3(); //вручную комбинациями перебор
void	sort_5(); //отбросить 2 в стек б, потом сортировка 3-х

int		check_args();
int		check_limits();

int		if_sorted();
//int		if_reverse_sorted();
int		length_of_sorted_chunk();
int		length_of_all_stack();

void	quick_sort(int arr[], int left, int right);

void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstnew(int nbr, int index);

#endif
