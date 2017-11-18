/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 22:35:05 by tfontain          #+#    #+#             */
/*   Updated: 2017/11/18 23:14:46 by tfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	r(intmax_t *a, intmax_t na)
{
	intmax_t i;
	intmax_t tmp;

	i = 1;
	tmp = a[0];
	while (i < na)
	{
		a[i - 1] = a[i];
		++i;
	}
	a[na - 1] = tmp;
}

void	rr(intmax_t *b, intmax_t nb)
{
 // reverse rotate
}








