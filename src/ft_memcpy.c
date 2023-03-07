/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:31:41 by raalonso          #+#    #+#             */
/*   Updated: 2023/03/07 16:57:44 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int	i;
	char
		*str;
	char
		*str2;

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
	char str[] = "holaadios";
	char str2[] = "quecoñodsfs";
	ft_memcpy(&str, &str2, 14);
	printf("%s", str);
	return 0;
}*/