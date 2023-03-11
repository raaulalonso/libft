/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 20:13:09 by raalonso          #+#    #+#             */
/*   Updated: 2023/03/08 23:53:01 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
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
