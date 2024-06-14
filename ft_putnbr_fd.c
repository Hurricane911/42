/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:21:06 by joyim             #+#    #+#             */
/*   Updated: 2024/06/14 12:34:54 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <unistd.h>
*/
#include "libft.h"

void	put_char(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		put_char('-', fd);
		put_char('2', fd);
		n = 417483648;
	}
	if (n < 0)
	{
		put_char('-', fd);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		(put_char((n + 48), fd));
	}
}
/*
int main()
{
	int n = -12345;
	ft_putnbr_fd(n, 1);
	return 0;
}
*/
