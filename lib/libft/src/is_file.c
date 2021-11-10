/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoto <ksoto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 20:30:10 by ksoto             #+#    #+#             */
/*   Updated: 2021/11/10 14:35:10 by ksoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_file(char *filename)
{
	struct stat	buf;

	if (lstat(filename, &buf) == -1)
		return (0);
	return ((S_ISDIR(buf.st_mode) * -1) ^ (S_ISBLK(buf.st_mode) * 6)
		^ (S_ISLNK(buf.st_mode) * 5) ^ (S_ISREG(buf.st_mode) * 4)
		^ (S_ISCHR(buf.st_mode) * 3) ^ (S_ISSOCK(buf.st_mode) * 2)
		^ S_ISFIFO(buf.st_mode));
}
