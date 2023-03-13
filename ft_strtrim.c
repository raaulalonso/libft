/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 23:35:41 by raalonso          #+#    #+#             */
/*   Updated: 2023/03/14 00:18:02 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*str;
	int		s1len;
	int		setlen;

	i = 0;
	j = 0;
	k = 0;
	s1len = ft_strlen(s1);
	setlen = ft_strlen(set);
	str = (char *)malloc(((s1len) + 1) * sizeof(char *));
	if (!str)
		return (0);
	while ((s1[i] == set[i]) && ((s1[i] != '\0') && (set[i] != '\0')))
		i++;
	if (set[i] == '\0')
	{
		while (s1[i] != '\0')
		{
			str[j] = s1[i];
			i++;
			j++;
		}
		str[j] = '\0';
		return (str);
	}
	while ((s1[s1len] == set[setlen]) && ((setlen != 0) && (s1len != 0)))
	{
		s1len--;
		setlen--;
	}
	if (setlen == 0)
	{
		while (k != s1len)
		{
			str[k] = s1[k];
			k++;
		}
		str[k] = '\0';
		return (str);
	}
	return ((char *)s1);
	/*while ((s1[i] != '\0') && (s1[i + j] != '\0'))
	{
		while ((s1[i + j] == set[j]) && (set[j] != '\0'))
		{
			j++;
		}
		if (set[j] != '\0')
			j = 0;
		str[i] = s1[i + j];
		i++;
	}*/
}

/*#include <stdio.h>
int main(void)
{
	printf("%s", ft_strtrim("hola soy raul", "soy "));
	return 0;
}*/
