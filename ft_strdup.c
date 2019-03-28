/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 15:19:08 by abaptist          #+#    #+#             */
/*   Updated: 2019/02/13 16:17:55 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *duplicate;
	char *strptr;
	char *dupptr;

	strptr = src;
	while (*strptr++)
		;
	duplicate = malloc(strptr - src + 1);
	if (!duplicate)
		return (NULL);
	dupptr = duplicate;
	while ((*dupptr++ = *src++) != '\0')
		;
	return (duplicate);
}
