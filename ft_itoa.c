/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:30:17 by joyim             #+#    #+#             */
/*   Updated: 2024/06/14 16:15:58 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
*/
#include "libft.h"
/*calculate len of n
 *if len of n is -, + 1 to add space
 *if len still exist, divide 10, to get len
 *each len represent space
 *if negative, -- = +
 *take sign
 */
int	int_len(int nlen)
{
	int	len;

	len = 0;
	if (nlen < 1)
		len = 1;
	while (nlen)
	{
		nlen /= 10;
		len ++;
	}
	return (len);
}

int	convert_abs(int n)
{
	int		nb;

	nb = -1;
	if (n < 0)
		return (n * nb);
	return (n);
}

char	*ptr_malloc(int len)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * (len + 1));
	return (ptr);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*ptr;
	int		sign;
	int		absolute;

	len = 0;
	sign = 0;
	if (n < 0)
		sign = 1;
	len = int_len(n);
	ptr = ptr_malloc(len);
	if (ptr == NULL)
		return (NULL);
	absolute = convert_abs(n);
	ptr[len + 1] = '\0';
	len --;
	while (len > 0)
	{
		ptr[len] = 48 + absolute % 10;
		absolute /= 10;
		len --;
	}
	if (sign)
		ptr[0] = '-';
	return (ptr);
}
/*
int main()
{
	int num = -134567123;
	char *result = ft_itoa(num);
	
	printf("%s", result);
	return 0;
}
*/
