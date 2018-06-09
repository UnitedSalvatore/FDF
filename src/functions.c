/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 17:21:42 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/12 18:24:28 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_exit_with_message(int fd, const char *str, int exit_code)
{
	if (str)
		ft_dprintf(fd, "%s\n", str);
	exit(1);
}
