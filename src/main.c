/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 15:52:08 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/12 18:01:16 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "ft_printf.h"
#include "libft.h"
#include <unistd.h>

int		main(int argc, char const *argv[])
{
	t_fdf	fdf;


	if (argc != 2)
	{
		ft_dprintf(STDERR_FILENO, "usage: ./fdf file\n");
		return (0);
	}
	read_map(&fdf, argv[1]);
	return (0);
}
