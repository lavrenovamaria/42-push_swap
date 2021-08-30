/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:50:30 by wrickard          #+#    #+#             */
/*   Updated: 2021/08/20 16:50:35 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list *ft_lstnew(int nbr, int index)
{
	t_list *new;

	if(!(new = malloc(sizeof(t_list))))
		return (NULL);
	new->nbr = nbr;
	new->index = index;
	new->next = (NULL);
	new->flag = 0;
	return new;
}
