/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:43:02 by raalonso          #+#    #+#             */
/*   Updated: 2023/03/07 17:06:02 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;
	char
		*str;
	char
		*str2;

	i = 0;
	str = (char *)src;
	str2 = (char *)dst;
	if (dst < src)
	{
		while (i != len)
		{
			str2[i] = str[i];
			i++;
		}
	}
	return (dst);
}

#include <string.h>
#include <stdio.h>
int main(void)
{
	char str[] = "holaadios";
	char str2[] = "quecoñodsfs";
	memmove(&str, &str2, 14);
	printf("%s", str);
	return 0;
}