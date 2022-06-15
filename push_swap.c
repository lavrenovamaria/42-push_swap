/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:41:35 by wrickard          #+#    #+#             */
/*   Updated: 2021/10/17 18:03:16 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*current;
	t_list	*next;

	current = *begin_list;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*begin_list = NULL;
}

int	up_lst(t_list *st_a, int i)
{
	t_list			*new;
	unsigned int	count;

	count = 0;
	new = st_a;
	while (new->flag != i)
	{
		new = new->next;
		count++;
	}
	return (count);
}

t_list	*stack_new(int content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->flag = 0;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

int	clear_exit(int *numb_str, t_list *st_a, int flag)
{
	if (flag == 1)
	{
		ft_list_clear(&st_a);
		return (0);
	}
	if (flag == 2)
	{
		ft_list_clear(&st_a);
		free(numb_str);
		write(1, "Error\n", 6);
	}
	if (flag == 3)
	{
		ft_list_clear(&st_a);
		free(numb_str);
		return (0);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_list	*st_a;
	t_list	*st_b;
	int		*numb_str;
	int		i;

	i = 1;
	if (check_nbr(argv) == 0)
		return (ft_putstr("Error\n"));
	while (argv[i])
		st_add_back(&st_a, stack_new(ft_atoi(argv[i++])));
	if (argc < 3)
		return (clear_exit(NULL, st_a, 1));
	if (sort_put_ind(&st_a, &numb_str, argc) == -1)
		return (clear_exit(numb_str, st_a, 2));
	if (check(&st_a) == 0)
		return (clear_exit(numb_str, st_a, 3));
	if (ft_list_size(st_a) > 3)
	{
		sort_to_b(&st_a, &st_b, put_index(argc - 1), (ft_list_size(st_a) - 2));
		finish_sort(&st_a, &st_b);
	}
	else
		start_sort(&st_a);
	free(numb_str);
	ft_list_clear(&st_a);
}
