/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:09:51 by joyim             #+#    #+#             */
/*   Updated: 2024/06/19 14:35:11 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
/*
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
*/
void	*ft_calloc(size_t element, size_t size)
{
	void	*ptr;

	if (size > (UINT_MAX / element))
		return (NULL);
	if (element == '\0' || size == '\0')
		return (NULL);
	ptr = malloc(element * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, element * size);
	return (ptr);
}