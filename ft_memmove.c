/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 20:13:19 by raalonso          #+#    #+#             */
/*   Updated: 2023/03/11 18:28:39 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*str;
	char	*str2;
	char	buffer[999];

	i = 0;
	str = (char *)src;
	str2 = (char *)dst;
	while (i != len)
	{
		buffer[i] = str[i];
		i++;
	}
	i = 0;
	while (i != len)
	{
		str2[i] = buffer[i];
		i++;
	}
	return (dst);
}

/*#include <string.h>
#include <stdio.h>
int main(void)
{
	char str[] = "hola adios";
	ft_memmove(str + 2, str + 1, 3);
	printf("%s", str);
	return 0;
}*/