/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 12:37:05 by abaptist          #+#    #+#             */
/*   Updated: 2019/03/27 15:11:12 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int		g;
	size_t	j;

	g = 0;
	while (dest[g] != '\0')
		g++;
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[g] = src[j];
		g++;
		j++;
	}
	dest[g] = '\0';
	return (dest);
}
