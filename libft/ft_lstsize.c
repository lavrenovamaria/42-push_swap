/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:53:21 by wrickard          #+#    #+#             */
/*   Updated: 2021/08/23 17:39:26 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int ft_lstsize(t_list *lst)
{
	int count = 0;
	while(lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
