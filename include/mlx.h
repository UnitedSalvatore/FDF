/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 15:51:59 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/12 18:24:20 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

typedef struct s_fdf	t_fdf;

struct		s_fdf
{
	void	*mlx;
};

void	ft_exit_with_message(int fd, const char *str);

#endif
