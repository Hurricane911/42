/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:19:27 by joyim             #+#    #+#             */
/*   Updated: 2024/06/14 15:20:06 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t src_len;

    src_len = 0;
    i = 0;

    // Calculate the length of src
    while (src[src_len] != '\0')
    {
        src_len++;
    }

    // If dstsize is 0, return the length of src
    if (dstsize == 0)
    {
        return src_len;
    }

    // Copy characters from src to dst
    while (i < (dstsize - 1) && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }

    // Null-terminate the destination string
    dst[i] = '\0';

    return src_len;
}
/*
int main() {
    char dest[10];
    const char *src = "Hello, World!";

    size_t copied = ft_strlcpy(dest, src, sizeof(dest));
    printf("Copied %zu characters: %s\n", copied,  dest);

    return 0;
}
*/
