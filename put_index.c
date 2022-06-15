/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:41:39 by wrickard          #+#    #+#             */
/*   Updated: 2021/10/15 19:41:40 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	put_index(int i)
{
	if (i > 3 && i < 20)
		return (3);
	if (i >= 20 && i < 50)
		return (5);
	if (i >= 50 && i < 100)
		return (5);
	if (i >= 100 && i < 150)
		return (9);
	if (i >= 150 && i < 500)
		return (25);
	return (25);
}

void	ind_of(int *str, t_list **st_a, int size)
{
	int		c;
	t_list	*list;

	list = *st_a;
	c = 0;
	while (list)
	{
		while (c < size)
		{
			if (str[c] == list->content)
				list->flag = c + 1;
			c++;
		}
		c = 0;
		list = list->next;
	}
	*st_a = list;
	return ;
}
