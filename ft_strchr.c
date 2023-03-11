/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:47:12 by raalonso          #+#    #+#             */
/*   Updated: 2023/03/11 18:59:10 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (s[i] != '\0')
	{
		if (c == s[i])
			return (str + i);
		i++;
	}
	if (c == '\0')
		return (str + i);
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	char *str = "hola me llamo raul";
	char c = 'l';
	printf("%s", strchr(str, c));
	return (0);
}*/