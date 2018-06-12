/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 15:51:59 by ypikul            #+#    #+#             */
/*   Updated: 2018/08/10 18:05:11 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <stdint.h>

# define USAGE_ERROR 1
# define SERVER_CONECTION_ERROR 2

typedef struct s_fdf	t_fdf;
typedef struct s_vartex	t_vertex;
typedef struct s_map	t_map;
typedef struct s_data	t_data;

struct			s_data
{
	char		**line;
	t_data		*next;
};

struct			s_vertex
{
	double		x;
	double		y;
	double		z;
	uint32_t	color;
};

struct			s_map
{
	t_vertex	**coords;
	unsigned	width;
	unsigned	height;
};

struct			s_fdf
{
	void		*mlx_ptr;
	void		*win_ptr;
	t_map		map;

};

void			ft_exit_with_message(int fd, const char *str);

#endif
