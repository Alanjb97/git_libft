/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 13:57:58 by abaptist          #+#    #+#             */
/*   Updated: 2019/03/27 15:59:29 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t j;

	if (n == 0)
		return (0);
	j = 0;
	while (s1[j] && s2[j] && s1[j] == s2[j] && j < n - 1)
		++j;
	return ((unsigned char)s1[j] - (unsigned char)s2[j]);
}
