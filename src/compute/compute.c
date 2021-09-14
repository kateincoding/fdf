/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciglesia <ciglesia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 20:40:11 by ciglesia          #+#    #+#             */
/*   Updated: 2021/08/11 20:40:12 by ciglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/*
** max_calculator: calculate the max number between 2
*/

int	max_calculator(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

/*
** module: apply module to a number
*/

int	module(int a)
{
	if (a < 0)
		a = a * -1;
	return (a);
}

/*
** convert_isometric: reasign the values of x y to a isometric
*/

void	convert_isometric(t_pixel *px, int z, t_fdf *fdf)
{
	if (fdf->view == 3)
	{
		px->x = (px->x - px->y) * cos(0.7);
		px->y = (px->x + px->y) * sin(0.7) - z;
	}
}
