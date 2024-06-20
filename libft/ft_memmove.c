/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:08:34 by joyim             #+#    #+#             */
/*   Updated: 2024/06/14 12:34:17 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (d > s)
	{
		while (len > 0)
		{
			len --;
			d[len] = s[len];
		}
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
/*
int main() {
    char src1[] = "Hello, World!";
    char dest1[20];
    ft_memmove(dest1, src1, 13);
    printf("After my_memmove: '%s'\n", dest1);

    // Test with overlapping regions
    char buffer[] = "1234567890";
    ft_memmove(buffer + 4, buffer, 6);
    printf("After my_memmove with overlap: '%s'\n", buffer);

    return 0;
}
*/
