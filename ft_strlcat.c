/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 13:27:40 by abaptist          #+#    #+#             */
/*   Updated: 2019/03/27 18:46:36 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t g;
	size_t j;
	size_t res;

	g = 0;
	while (dest[g] != '\0')
		++g;
	res = 0;
	while (src[res] != '\0')
		++res;
	if (size <= g)
		res += size;
	else
		res += g;
	j = 0;
	while (src[j] != '\0' && g + 1 < size)
	{
		dest[g] = src[j];
		g++;
		j++;
	}
	dest[g] = '\0';
	return (res);
}
