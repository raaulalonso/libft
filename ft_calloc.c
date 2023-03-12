/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:34:45 by raalonso          #+#    #+#             */
/*   Updated: 2023/03/12 22:05:12 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	int		i;
	void	*mem;

	i = 0;
	mem = malloc(count * size);
	if (!mem)
		return (NULL);
	while (i < count)
	{
		((unsigned char *)mem)[i] = 0;
		i++;
	}
	return (mem);
}

/*#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	char *str;
	printf("%s", (char *)ft_calloc(6, 1));
	return 0;
}*/