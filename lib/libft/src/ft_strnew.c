/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoto <ksoto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 20:41:27 by ksoto             #+#    #+#             */
/*   Updated: 2021/11/10 14:34:45 by ksoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char			*fresh;
	unsigned int	i;

	i = 0;
	fresh = (char *)malloc(sizeof(char) * (size + 1));
	if (!fresh)
		return (NULL);
	while (i <= size)
		fresh[i++] = '\0';
	return (fresh);
}
