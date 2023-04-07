/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 23:35:41 by raalonso          #+#    #+#             */
/*   Updated: 2023/04/08 00:28:18 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_removefirst(char *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		s1[i] = s1[i + 1];
		i++;
	}
	return (ft_strlen(s1));
}

static	int	ft_removelast(char *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i + 1] == '\0')
			s1[i] = '\0';
		i++;
	}
	return (ft_strlen(s1));
}

static	size_t	ft_search(char *s1, char *str, char *set, size_t s1len)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (k < ft_strlen(s1))
	{
		while (set[i] != '\0')
		{
			if (str[0] == set[i])
				s1len = ft_removefirst((char *)str);
			if (str[s1len - 1] == set[i])
				s1len = ft_removelast((char *)str);
			i++;
		}
		i = 0;
		k++;
	}
	return (s1len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	s1len;

	s1len = ft_strlen(s1);
	str = (char *)malloc(s1len * sizeof(char));
	if (!str)
		return (0);
	ft_strlcpy(str, s1, s1len + 1);
	s1len = ft_search((char *)s1, str, (char *)set, s1len);
	return (ft_substr(str, 0, s1len));
}

/*int main(void)
{
	printf("%s", ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet", " "));
	return 0;
}*/