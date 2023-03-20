/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 23:35:41 by raalonso          #+#    #+#             */
/*   Updated: 2023/03/21 00:14:56 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	free(str);
	return (aux);
}

char	*loop_through_c(char *set, char *str)
{
	int		i;
	char	c;

	i = 0;
	while (set[i] != '\0')
	{
		c = set[i];
		str = search(str, c);
		i++;
	}
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s1len;
	char	*str;
	char	*trim;

	s1len = ft_strlen(s1);
	str = (char *)malloc(s1len * sizeof(char));
	if (!str)
		return (0);
	ft_strlcpy(str, (char *)s1, (s1len + 1));
	while (s1len != 0)
	{
		str = loop_through_c((char *)set, str);
		if (!str)
			return (0);
		s1len--;
	}
	trim = ft_strdup(str);
	free(str);
	return (trim);
}

// int main(void)
// {
// 	printf("%s", ft_strtrim("   xxxtripouille", " x"));
// 	return 0;
// }