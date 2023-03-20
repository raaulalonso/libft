/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 23:35:41 by raalonso          #+#    #+#             */
/*   Updated: 2023/03/20 01:56:41 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*search(char *str, char c)
{
	int		i;
	int		j;
	int		s1len;
	char	*aux;

	i = 0;
	j = 0;
	aux = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!aux)
		return (0);
	s1len = ft_strlen(str);
	while ((str[i] == c) && (str[i] != '\0'))
			i++;
	while ((str[s1len - 1] == c) && (s1len != 0))
			s1len--;
	while (i < s1len)
	{
		aux[j] = str[i];
		i++;
		j++;
	}
	aux[j] = '\0';
	return (aux);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s1len;
	int		i;
	char	c;
	char	*str;
	char	*trim;

	i = 0;
	s1len = ft_strlen(s1);
	str = (char *)s1;
	while (s1len != 0)
	{
		while (set[i] != '\0')
		{
			c = set[i];
			str = search(str, c);
			i++;
		}
		i = 0;
		s1len--;
	}
	trim = ft_strdup(str);
	free(str);
	return (trim);
}
