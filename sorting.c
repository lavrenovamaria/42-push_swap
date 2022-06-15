/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:41:43 by wrickard          #+#    #+#             */
/*   Updated: 2021/10/15 19:41:44 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start_sort(t_list **st_a)
{
	t_list	*last;

	if (check(st_a) == 0)
		return ;
	last = ft_list_last(*st_a);
	if (st_a[0]->flag > st_a[0]->next->flag && last->flag > st_a[0]->flag)
	{
		ss(st_a, "sa\n");
	}
	else if (st_a[0]->flag > st_a[0]->next->flag && last->flag < st_a[0]->flag)
	{
		ra_rb_rr(st_a, "ra\n");
		if (check(st_a) != 0)
		{
			ss(st_a, "sa\n");
		}
	}
	else if (st_a[0]->flag < st_a[0]->next->flag)
	{
		rrr(st_a, "rra\n");
		if (check(st_a) != 0)
		{
			ss(st_a, "sa\n");
		}
	}
}

void	sort_up(t_list **st_a, t_list **st_b, int up, int down)
{
	if (up <= down)
	{
		while (up > 1)
		{
			up--;
			ra_rb_rr(st_b, "rb\n");
		}
		if (up == 1)
		{
			up--;
			ss(st_b, "sb\n");
		}
		push_to_st_b(st_b, st_a, "pa\n");
	}
	else
	{
		while (down > 0)
		{
			down--;
			rrr(st_b, "rrb\n");
		}
		push_to_st_b(st_b, st_a, "pa\n");
	}
}

void	finish_sort(t_list **st_a, t_list **st_b)
{
	t_list	*new;
	int		count;
	int		up;
	int		down;

	count = ft_list_size(*st_b);
	while (count-- > 1)
	{
		new = *st_b;
		up = up_lst(new, (st_a[0]->flag - 1));
		down = ft_list_size(*st_b) - up_lst(new, (st_a[0]->flag - 1));
		sort_up(st_a, st_b, up, down);
		if (st_a[0]->flag > st_a[0]->next->flag)
			ss(st_a, "sa\n");
	}
	push_to_st_b(st_b, st_a, "pa\n");
}
