/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 15:14:38 by abaptist          #+#    #+#             */
/*   Updated: 2019/02/20 15:24:27 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char *last_pos;

	last_pos = (0);
	while (*s)
	{
		if (*s == c)
			last_pos = (char*)s;
		++s;
	}
	if (last_pos)
		return (last_pos);
	if (c == '\0')
		return ((char*)s);
	return (0);
}
