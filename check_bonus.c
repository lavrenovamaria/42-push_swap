/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:41:16 by wrickard          #+#    #+#             */
/*   Updated: 2021/10/17 14:45:50 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_nbr(char **str)
{
	int		i;
	int		j;
	long	min;
	long	max;

	i = 1;
	min = -2147483648;
	max = 2147483647;
	while (str[i])
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			while (str[i][j] == '-' || str[i][j] == '+')
				j++;
			while (str[i][j] >= '0' && str[i][j] <= '9' && str[i][j])
				j++;
			if (str[i][j])
				return (0);
		}
		if (ft_atoi(str[i]) < min || ft_atoi(str[i]) > max)
			return (0);
		i++;
	}
	return (1);
}

int	check(t_list **st_a)
{
	t_list	*check;
	int		i;
	int		ch;

	ch = 0;
	check = *st_a;
	while (check->next)
	{
		i = check->content;
		check = check->next;
		if (check->content < i)
			return (1);
	}
	return (0);
}

int	check_repeat(int *str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (str[i] == str[i + 1])
			return (-1);
		i++;
	}
	return (0);
}
