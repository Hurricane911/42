/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:47:08 by joyim             #+#    #+#             */
/*   Updated: 2024/06/19 11:49:50 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] && (i + j) < len && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*
int main()
{
    char *haystack = "Hello world";
    char *needle = "world";
    char *ptr = ft_strnstr(haystack, needle, strlen(haystack));
    if (ptr != NULL) {
        printf("Found at position: %ld\n", ptr - haystack);
        printf("Substring found: %s\n", ptr);
    } else {
        printf("Substring not found\n");
    }
    return 0;
}
*/
