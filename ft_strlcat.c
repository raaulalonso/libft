/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 22:19:53 by raalonso          #+#    #+#             */
/*   Updated: 2023/03/08 23:52:09 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (dst[i] != '\0')
    {
        i++;
    }
    if ((dstsize == 0) || (dstsize < i))
        return (i + dstsize);
    while ((src[j] != '\0') && (j < dstsize))
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (i);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
    int num;
    char str1[] = "Hola";
    char str2[] = "guatafac";
    
    num = ft_strlcat(str1, str2, 11);
    printf("%s\n", str1);
    printf("%d", num);
    return 0;
}*/