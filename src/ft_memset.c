/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:57:03 by raalonso          #+#    #+#             */
/*   Updated: 2023/03/07 16:50:52 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int	i;
	char
		*pt;
	char
		c2;

	pt = b;
	c2 = c;
	i = 0;
	while (i != len)
	{
		pt[i] = c;
		i++;
	}
	return (b);
}
