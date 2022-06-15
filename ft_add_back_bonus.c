/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_back_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:41:20 by wrickard          #+#    #+#             */
/*   Updated: 2021/10/17 14:46:19 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	st_add_back(t_list **st_a, t_list *new)
{
	t_list	*moy;

	if (!(new || st_a))
		return ;
	if (!(*st_a))
	{
		*st_a = new;
		return ;
	}
	moy = (*st_a);
	while (moy->next)
		moy = moy->next;
	moy->next = new;
	new->prev = moy;
	new->next = NULL;
	return ;
}

int	*sort_int_nbr_str(int *numb_str, int size)
{
	int		i;
	int		j;
	int		tmp;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			if (numb_str[i] >= numb_str[j])
			{
				tmp = numb_str[i];
				numb_str[i] = numb_str[j];
				numb_str[j] = tmp;
			}
			i++;
		}
		j++;
	}
	return (numb_str);
}
