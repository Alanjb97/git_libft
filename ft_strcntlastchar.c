/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcntlastchar.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 17:59:17 by abaptist          #+#    #+#             */
/*   Updated: 2019/03/27 18:09:39 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strcntlastchar(char *str, const char *charset)
{
	unsigned int	i;
	int				index;
	unsigned int	count;
	unsigned int	tmp;

	count = 0;
	i = (unsigned int)ft_strlen(str) - 1;
	while (str[i])
	{
		index = 0;
		tmp = count;
		while (charset[index])
			if (charset[index++] == str[i])
				++count;
		if (count == tmp)
			return (count);
		--i;
	}
	return (count);
}
