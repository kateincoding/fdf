/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoto <ksoto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:10:44 by ksoto             #+#    #+#             */
/*   Updated: 2021/11/10 15:12:10 by ksoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_copy_color(char *dst, char *src, int i)
{
	int	j;

	j = 0;
	while (src[i])
		dst[j++] = src[i++];
	dst[j] = '\0';
}

void	ft_extract_color(t_fdf *fdf, char *str, int y, int x)
{
	int		i;
	int		len;
	char	*tmp;

	i = 0;
	while (str[i])
	{
		if (str[i] == ',')
		{
			while (str[i] == ',' || str[i] == '0' || str[i] == 'x')
				i++;
			len = i;
			while (str[len])
				len++;
			tmp = ft_memalloc(sizeof(char) * (len - i + 1));
			ft_copy_color(tmp, str, i);
			fdf->map[y][x].color = ft_atoi_base(tmp, 16);
			free(tmp);
			break ;
		}
		i++;
	}
}
