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

void sort_3(t_list **list_sa)
{

}

void sort_5()
{

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

int	main(int argc, char **argv)
{
	t_list *not_sorted;
	int count;

	not_sorted = 0;
	if (argc > 1)
	{
		not_sorted = 1;
		while (not_sorted < argc)
		{
			if (!)
				return(error(not_sorted))
			i++;
		}
		if (!(if_sorted(not_sorted))
			sorting(&not_sorted);
	}
	return (0);
}

