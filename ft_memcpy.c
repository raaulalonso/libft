/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 20:13:28 by raalonso          #+#    #+#             */
/*   Updated: 2023/03/08 23:54:52 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str;
	char	*str2;

	i = 0;
	str = (char *)src;
	str2 = (char *)dst;
	while (i != n)
	{
		str2[i] = str[i];
		i++;
	}
	return (dst);
}

/*#include <string.h>
#include <stdio.h>
int main(void)
{
	char str[] = "hola adios";
	memcpy(str + 2, str + 1, 3);
	printf("%s", str);
	return 0;
}*/