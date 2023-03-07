/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:19:06 by raalonso          #+#    #+#             */
/*   Updated: 2023/03/07 16:46:42 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	int	i;
	char
		*pt;

	pt = (char *)s;
	i = 0;
	if (n > 0)
	{
		while (i != n)
		{
			pt[i] = '\0';
			i++;
		}
	}
}

/*#include <strings.h>
#include <stdio.h>
int main(void)
{
	char str[] = "holaadios";
	ft_bzero(&str, 4);
	printf("%s", str);
	return 0;
}*/