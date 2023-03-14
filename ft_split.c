/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:52:44 by raalonso          #+#    #+#             */
/*   Updated: 2023/03/14 22:13:27 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strcpymod(char *str, char *s, int k, int start)
{
	int i;

	i = 0;
	while (i < k)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		wnum;
	int		w;
	int		k;
	int		f;
	int		j;
	char	**str;

	i = 0;
	f = 0;
	k = 0;
	j = 0;
	w = 2;
	wnum = 0;
	str = (char **)malloc(3 * sizeof(char *));
	while (w != 0)
	{
		while (((s[i] != '\0') || (s[i] == '\0')) && (j < (wnum + 1)))
		{
			if ((j == wnum) && (w == 1))
				break ;
			if ((s[i] != c) && (s[i] != '\0'))
			{
				i++;
				k++;
				f = 1;
			}
			else if((s[i] == c) || (s[i] == '\0'))
			{
				if (f == 1)
				{
					if (w == 2)
						wnum++;
					else if (w == 1)
					{
						str[j] = (char *)malloc((k + 1) * sizeof(char));
						ft_strcpymod(str[j], (char *)s, k, (i - k));
						++j;
					}
				}
				k = 0;
				f = 0;
				++i;
				if ((s[i - 1] == '\0') && (w = 2))
					break ;
			}
		}
		w--;
		i = 0;
	}
	
	return (str);
}

/*#include <stdio.h>
int main(void)
{
	int i;
	
	i = 0;
	while (i < 3)
	{
		printf("%s", ft_split("hola soy raul ", ' ')[i]);
		printf("\n");
		i++;
	}
	return 0;
}*/