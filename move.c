/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:41:30 by wrickard          #+#    #+#             */
/*   Updated: 2021/10/15 19:41:31 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_list **stb, char *str)
{
	t_list	*tmp;

	ft_putstr(str);
	tmp = stb[0];
	stb[0] = stb[0]->next;
	tmp->next = stb[0]->next;
	stb[0]->next = tmp;
}

void	push_to_st_b(t_list **list_a, t_list **list_b, char *str)
{
	t_list	*tmp;

	ft_putstr(str);
	tmp = list_a[0];
	list_a[0] = tmp->next;
	tmp->next = list_b[0];
	list_b[0] = tmp;
}

void	ra_rb_rr(t_list **list_ra, char *str)
{
	t_list	*tmp;

	ft_putstr(str);
	tmp = list_ra[0];
	list_ra[0] = tmp->next;
	tmp->next = NULL;
	st_add_back(list_ra, tmp);
}

void	rrr(t_list **st_a, char *str)
{
	t_list	*tmp;

	ft_putstr(str);
	tmp = ft_list_last(*st_a);
	st_add_front(st_a, tmp);
	tmp = st_a[0];
	while (tmp->next != st_a[0])
		tmp = tmp->next;
	tmp->next = NULL;
}

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*list;

	list = begin_list;
	if (list)
	{
		while (list->next)
			list = list->next;
		return (list);
	}
	return (NULL);
}
