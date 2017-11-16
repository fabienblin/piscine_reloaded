/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fablin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:20:18 by fablin            #+#    #+#             */
/*   Updated: 2017/11/10 10:31:24 by fablin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int facto;

	i = 1;
	facto = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (i <= nb)
		facto *= i++;
	return (facto);
}
