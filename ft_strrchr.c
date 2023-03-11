/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:02:21 by raalonso          #+#    #+#             */
/*   Updated: 2023/03/11 20:21:33 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (c == s[i])
			str = ((char *)s + i);
		i++;
	}
	if (c == '\0')
	{
		str = (char *)s;
		return (str + i);
	}
	return (str);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	char *str = "horla mer llamo raul";
	char c = 0;
	printf("%d", strrchr(str, c));
	return (0);
}*/