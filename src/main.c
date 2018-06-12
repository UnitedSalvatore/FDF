/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 15:52:08 by ypikul            #+#    #+#             */
/*   Updated: 2018/08/10 17:59:42 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "ft_printf.h"
#include "libft.h"
#include "mlx.h"
#include <unistd.h>

static void	initialize(t_fdf *fdf)
{

}

int			main(int argc, char const *argv[])
{
	t_fdf	fdf;

	if (argc != 2)
		ft_dprintf(STDERR_FILENO, "usage: ./fdf file\n");
	else
	{
		initialize(&fdf);
		ft_bzero(&fdf, sizeof(t_fdf));
		read_map(&fdf, argv[1]);
	}
	return (0);
}
