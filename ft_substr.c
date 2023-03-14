/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:22:16 by raalonso          #+#    #+#             */
/*   Updated: 2023/03/14 19:58:35 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (malloc((len - start) * sizeof(char)));
	while ((s[start] != '\0') && (i < len))
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>
int main(void)
{
	printf("%s", ft_substr("hola soy raul", 5, 2));
	return 0;
}*/
