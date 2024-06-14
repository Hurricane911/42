/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:25:25 by joyim             #+#    #+#             */
/*   Updated: 2024/06/14 12:34:38 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len --;
	}
	return (b);
}
/*
int main()
{
	char array[10];

	ft_memset(array, 65, sizeof(array));

	for (size_t i = 0; i < sizeof(array); i++)
	{
		printf("%c", array[i]);
	}
	return 0;
}
*/
