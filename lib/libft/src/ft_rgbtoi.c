/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rgbtoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoto <ksoto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 01:16:56 by ksoto             #+#    #+#             */
/*   Updated: 2021/11/10 14:33:29 by ksoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_rgbtoi(unsigned char r, unsigned char g, unsigned char b)
{
	int	red;
	int	green;
	int	blue;

	red = r * 0x10000;
	green = g * 0x100;
	blue = b;
	return (red + green + blue);
}
