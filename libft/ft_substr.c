/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:39:46 by joyim             #+#    #+#             */
/*   Updated: 2024/06/18 16:12:34 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>
*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	sub_len;
	char	*substr;

	s_len = ft_strlen(s);
	sub_len = 0;
	if (start < s_len)
		sub_len = s_len - start;
	if (sub_len > len)
		sub_len = len;
	substr = (char *)malloc((sub_len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, sub_len);
	substr[sub_len] = '\0';
	return (substr);
}
/*
int main()
{
	char *str = "Hello, World";
	int start = 3;
	size_t len = 5;

	char *result = ft_substr(str, start, len);
	printf("%s", result);

	free(result);
	
	return 0;
}
*/
