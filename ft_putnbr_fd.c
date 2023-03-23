/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 19:34:14 by raalonso          #+#    #+#             */
/*   Updated: 2023/03/23 20:57:30 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	num;

	if (n < 0)
	{
		n *= -1;
		num = (n + 48);
		write(fd, "-", 1);
		write(fd, &num, 1);
	}
	else
	{
		num = (n + 48);
		write(fd, &num, 1);
	}
}
