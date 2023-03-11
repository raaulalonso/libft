/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 22:00:10 by raalonso          #+#    #+#             */
/*   Updated: 2023/03/08 23:52:39 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;
    
    j = 0;
    while (src[j] != '\0')
    {
        j++;
    }
    i = 0;
    while ((src[i] != '\0') && (i != dstsize))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (j);
}