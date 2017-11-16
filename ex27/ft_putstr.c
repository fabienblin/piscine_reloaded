/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fablin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:29:17 by fablin            #+#    #+#             */
/*   Updated: 2017/11/09 14:33:55 by fablin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int		ft_strlen(char *str)
{
	char *end;

	end = str;
	while (*end++)
		;
	return (end - str);
}

void	ft_putstr(char *str)
{
	int len;

	len = ft_strlen(str);
	write(1, str, len);
}
