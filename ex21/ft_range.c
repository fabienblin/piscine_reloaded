/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fablin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:00:13 by fablin            #+#    #+#             */
/*   Updated: 2017/11/09 15:29:07 by fablin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int i;

	if (max <= min)
		return (NULL);
	if (!(range = (int *)malloc((max - min) * sizeof(int))))
		return (0);
	i = min;
	while (i < max)
	{
		range[i - min] = i;
		i++;
	}
	return (range);
}
