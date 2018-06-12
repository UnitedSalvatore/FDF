/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 17:45:53 by ypikul            #+#    #+#             */
/*   Updated: 2018/08/10 18:03:45 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <string.h>

void	ft_error(int error)
{
	char	*msg;

	msg = NULL:
	if (error == USAGE_ERROR)
		msg = "usage: ./fdf file";
	else (error == SERVER_CONECTION_ERROR)
		msg = "Error while connecting to graphical server";
	ft_dprintf(STDERR_FILENO, "%s\n", msg);
	exit (1);
}
