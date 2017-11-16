/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fablin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:00:09 by fablin            #+#    #+#             */
/*   Updated: 2017/11/10 12:29:50 by fablin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

void	ft_display_file(char *file_name)
{
	int		fd;
	char	buf[1];
	int		read_size;

	fd = open(file_name, O_RDONLY);
	while ((read_size = read(fd, buf, 1)) > 0)
	{
		write(1, buf, 1);
	}
	close(fd);
}
