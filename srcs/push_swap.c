#include "../includes/push_swap.h"
#include <stdio.h>

void sa_sb_ss(t_list **list_sa)
{
	t_list *tmp;

	tmp = list_sa[0];
	list_sa[0] = list_sa[0]->next;
	tmp->next = list_sa[0]->next;
	list_sa[0]->next = tmp;
}

void push_to_a(t_list **list_b, t_list **list_a)
{
	t_list *tmp;

	tmp = list_a[0];
	list_a[0] = tmp->next;
	tmp->next = list_b[0];
	list_b[0] = tmp;
}

void push_to_b(t_list **list_a, t_list **list_b)
{
	t_list *tmp;

	tmp = list_a[0];
	list_a[0] = tmp->next;
	tmp->next = list_b[0];
	list_b[0] = tmp;
}

void ra_rb_rr(t_list **list_ra)
{
	t_list *tmp;

	tmp = list_ra[0];
	list_ra[0] = tmp->next;
	tmp->next = NULL;
	ft_lstadd_back(list_ra, tmp);
}

void rra_rrb_rrr(t_list **list_rra)
{
	t_list *tmp;

	tmp = ft_lstlast(*list_rra);
	ft_lstadd_front(list_rra, tmp);
	tmp = list_rra[0];
	while (tmp->next != list_rra[0])
		tmp = tmp->next;
	tmp->next = NULL;
}
int	max_nbr(t_list *list)
{
	int max;

	max = list->nbr;
	while(list != NULL)
	{
		if((list->nbr) > max)
			max = list->nbr;
		list = list->next;
	}
	return(max);
}

t_list **list_of_sorted_and_not()

int	max_ind(t_list *list)
{
	int max_ind;

	max_ind = 0;
	if (list == NULL)
		return (0);
	while(list != NULL)
	{
		if((list->index) > max_ind)
			max_ind = list->index;
		list = list->next;
	}
	return(max_ind);
}

t_list	*addlast(t_list *list)
{
	if (list!= NULL)
		if (list->next)
			return (addlast(list->next));
	return (list);
}

void sort_3(t_list **list)
{
	if (list[0]->nbr > list[0]->next->nbr)
		{
			if (list[0]->nbr > list[0]->next->next->nbr)
			{
				if (list[0]->next->nbr > list[0]->next->next->nbr)
				{
					sa_sb_ss(list);
					rra_rrb_rrr(list);
				}
				else
					ra_rb_rr(list);
			}
			else if (list[0]->nbr < list[0]->next->next->nbr)
				sa_sb_ss(list);
		}
		else if (list[0]->nbr < list[0]->next->nbr)
		{
			if (list[0]->nbr > list[0]->next->next->nbr)
				rra_rrb_rrr(list);
			else if (list[0]->nbr < list[0]->next->next->nbr)
			{
				if (list[0]->next->nbr > list[0]->next->next->nbr)
				{
					sa_sb_ss(list);
					ra_rb_rr(list);
				}
				else
					return;
			}
		}
}

void sort_4(t_list **list_a, t_list **list_b)
{
	int max_data;

	max_data = max_nbr(list_a[0]);
	if (list_a[0]->nbr == max_data)
	{
		push_to_b(list_a, list_b);
		sort_3(list_a);
		push_to_a(list_a, list_b);
		ra_rb_rr(list_a);
		return;
	}
	else if (addlast(list_a[0])->nbr == max_data)
	{
		rra_rrb_rrr(list_a);
		push_to_b(list_a, list_b);
		sort_3(list_a);
		push_to_a(list_a, list_b);
		ra_rb_rr(list_a);
		return;
	}
	else
	{
		ra_rb_rr(list_a);
		sort_4(list_a, list_b);
	}
}

void sort_5(t_list **list_a, t_list **list_b)
{
	int frst_nbr;
	int scnd_nbr;
	frst_nbr = max_nbr(list_a[0]);
	scnd_nbr = frst_nbr - 1;


}

int check_args()
{
	return 0;
}

//проверить валидность введенных данных
//дубликаты
//проверить лимиты MAXINT MININT
//проверить отсортирован ли уже стэк или в обратном порядке
//найти самый длинный отсортированный кусок и кинуть его вниз
//объединять команды если они одного вида

void quick_sort(int arr[], int left, int right)
{
	int pivot;
	int i, j;
	int temp;

	if (left >= right)
		return ;
	pivot = left;
	i = left + 1;
	j = right;
	while(i <= j)
	{
		while (i <= right && arr[i] <= arr[pivot])
			i++;
		while ( j > left && arr[j] >= arr[pivot])
			j--;
		if (i > j)
		{
			temp = arr[j];
			arr[j] = arr[pivot];
			arr[pivot] = temp;
		}
		else
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	quick_sort(arr, left, j - 1);
	quick_sort(arr, j + 1, right);
}

// int	main(int argc, char **argv)
// {
// 	t_list *not_sorted;
// 	int count;

// 	not_sorted = 0;
// 	if (argc > 1)
// 	{
// 		not_sorted = 1;
// 		while (not_sorted < argc)
// 		{
// 			if (!)
// 				return(error(not_sorted))
// 			i++;
// 		}
// 		if (!(if_sorted(not_sorted))
// 			sorting(&not_sorted);
// 	}
// 	return (0);
// }


// void	raspredelitelnaya_shlyapa(t_list **list)
// {
// 	t_list *list;

// 	if (ft_lstsize(list) == 3)
// 	{
// 		sort_3(list);
// 	}
// 	else if (ft_lstsize(list) == 4)
// 	{
// 		sort_4(list);
// 	}
// 	else if (ft_lstsize(list) == 5)
// 	{
// 		sort_5(list);
// 	}
// 	else if (ft_lstsize(list) <= 100)
// 	{
// 		sort_5(list);
// 	}
// }

int	main(int argc, char **argv)
{
	int n;
	int *numbers;
	n = argc - 1;
	int i = 1;
	numbers = malloc(n * sizeof(*numbers));
	while(argv[i])
	{
		numbers[0] = ft_atoi(argv[i++]);
		printf("%d\n", numbers[0]);
	}
	return (0);
}
