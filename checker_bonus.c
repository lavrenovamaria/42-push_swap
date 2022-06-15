/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:06:38 by pcatheri          #+#    #+#             */
/*   Updated: 2021/12/11 15:13:12 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	s_move(t_list **st_a, t_list **st_b, char *str)
{
	if (str[1] == 'a' && str[2] == '\n' && *st_a)
		ss(st_a, "");
	else if (str[1] == 'b' && str[2] == '\n' && *st_b)
		ss(st_b, "");
	else if (str[1] == 's' && str[2] == '\n' && *st_a && *st_b)
	{
		ss(st_a, "");
		ss(st_b, "");
	}
	else
		exit (ft_putstr("Error\n"));
	return (0);
}

int	rrr_move(t_list **st_a, t_list **st_b, char *str)
{
	if (str[1] == 'a' && str[2] == '\n' && *st_a)
		ra_rb_rr(st_a, "");
	else if (str[1] == 'b' && str[2] == '\n' && *st_b)
		ra_rb_rr(st_b, "");
	else if (str[1] == 'r' && str[2] == '\n' && *st_a && *st_b)
	{
		ra_rb_rr(st_b, "");
		ra_rb_rr(st_a, "");
	}
	else if (str[1] == 'r' && str[2] == 'a' && str[3] == '\n' && *st_a)
		rrr(st_a, "");
	else if (str[1] == 'r' && str[2] == 'b' && str[3] == '\n' && *st_b)
		rrr(st_b, "");
	else if (str[1] == 'r' && str[2] == 'r' && str[3] == '\n' && *st_a && *st_b)
	{
		rrr(st_b, "");
		rrr(st_a, "");
	}
	else
		exit (ft_putstr("Error\n"));
	return (0);
}

int	p_move(t_list **st_a, t_list **st_b, char *str)
{
	if (str[1] == 'a' && str[2] == '\n' && *st_b)
		push_to_st_b(st_b, st_a, "");
	else if (str[1] == 'b' && str[2] == '\n' && *st_a)
		push_to_st_b(st_a, st_b, "");
	else
		exit (ft_putstr("Error\n"));
	return (0);
}

void	input_cmd(t_list **st_a, t_list **st_b)
{
	char	*str;

	str = malloc(100000);
	if (!str)
		return ;
	while (read(0, str, 100000) != 0)
	{
		if (str[0] == 's')
			s_move(st_a, st_b, str);
		else if (str[0] == 'r' && (str[1] == 'r' || str[1] != 'r'))
			rrr_move(st_a, st_b, str);
		else if (str[0] == 'p')
			p_move(st_a, st_b, str);
		else
			ft_putstr("Error\n");
	}
	free(str);
	if (*st_b)
		ft_list_clear(st_b);
	if (*st_a && check(st_a) == 0)
		clear_ex(st_a, NULL, "OK\n", 1);
	else if (*st_a)
		clear_ex(st_a, NULL, "KO\n", 1);
	else
		ft_putstr("Error\n");
}
