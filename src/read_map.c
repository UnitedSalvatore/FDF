/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 18:01:26 by ypikul            #+#    #+#             */
/*   Updated: 2018/08/10 17:54:45 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <unistd.h>
#include <fcntl.h>

static void	read_data(t_fdf *fdf, const int fd)
{
	char			*str;
	char			**split;

	while (ft_getline(fd, &str) < 0)
	{
		if (!(split = ft_strsplit(str, ' ')))
			ft_exit_with_message(STDERR_FILENO, "Error while ft_strsplit");
		ft_strdel(&str);

		ft_splitdel(&split);
	}
}

void		read_map(t_fdf *fdf, const char file_name[])
{
	int		fd;

	fd = open(file_name. O_RDONLY);
	if (fd < 0)
		ft_exit_with_message(STDERR_FILENO, "Error while opening file");
	read_data(fdf, fd);			
}
