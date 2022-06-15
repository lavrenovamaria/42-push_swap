/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:41:11 by wrickard          #+#    #+#             */
/*   Updated: 2021/10/17 13:58:15 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(const char *str)
{
	long	nb;
	size_t	i;

	nb = 0;
	i = 1;
	while (*str == '\n' || *str == '\v' || *str == '\t'\
		|| *str == '\f' || *str == ' ' || *str == '\r')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			i = i * -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - 48);
		str++;
	}
	nb = nb * i;
	return (nb);
}

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

int	ft_putstr(char *s)
{
	if (s == NULL)
		return (0);
	write(1, s, ft_strlen(s));
	return (0);
}

int	ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		i;

	i = 0;
	list = begin_list;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}

void	st_add_front(t_list **st_a, t_list *new)
{
	if (!*st_a)
	{
		*st_a = new;
		return ;
	}
	if (!new)
		return ;
	new->next = *st_a;
	*st_a = new;
}
