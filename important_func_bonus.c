/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   important_func_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:41:25 by wrickard          #+#    #+#             */
/*   Updated: 2021/10/17 14:47:00 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	sort_put_ind(t_list **st_a, int **str, int size)
{
	int		*dest;
	int		i;
	t_list	*sta;

	i = 0;
	sta = *st_a;
	dest = malloc(size * sizeof(*dest));
	while (sta)
	{
		dest[i++] = sta->content;
		sta = sta->next;
	}
	dest[i] = '\0';
	dest = sort_int_nbr_str(dest, size - 1);
	i = 0;
	size--;
	*str = dest;
	if (check_repeat(*str, size) == -1)
		return (-1);
	sta = *st_a;
	ind_of(dest, &sta, size);
	return (0);
}

void	sort_to_b(t_list **st_a, t_list **st_b, int ind, int count)
{
	int	d;
	int	size;

	size = ft_list_size(*st_a);
	d = 0;
	while (ft_list_size(*st_a) > 3)
	{
		if (st_a[0]->flag < (ind + d) && st_a[0]->flag < count)
		{
			push_to_st_b(st_a, st_b, "pb\n");
			if (st_b[0]->flag < d)
			{
				ra_rb_rr(st_b, "rb\n");
			}
			d++;
		}
		else
		{
			ra_rb_rr(st_a, "ra\n");
		}
	}
	start_sort(st_a);
}
