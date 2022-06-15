/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:41:55 by wrickard          #+#    #+#             */
/*   Updated: 2021/10/17 15:20:12 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "push_swap.h"

int		s_move(t_list **st_a, t_list **st_b, char *str);
int		r_move(t_list **st_a, t_list **st_b, char *str);
int		rrr_move(t_list **st_a, t_list **st_b, char *str);
int		p_move(t_list **st_a, t_list **st_b, char *str);
void	input_cmd(t_list **st_a, t_list **st_b);
int		clear_ex(t_list **lst, int **tab, char *str, int flag);

#endif
