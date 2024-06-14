/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:47:08 by joyim             #+#    #+#             */
/*   Updated: 2024/06/14 15:26:57 by joyim            ###   ########.fr       */
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

	if (!*needle)
		return ((char *)haystack);
	for (i = 0; haystack[i] != '\0' && i < len; i++)
	{
		for (j = 0; needle[j] != '\0' && (i + j) < len && haystack[i + j] == needle[j]; j++)
		{
			// Nothing needed here, the conditions in the for loop are sufficient
		}
		if (needle[j] == '\0')
		{
			return ((char *)&haystack[i]);
		}
	}
	return (NULL);
}
/*
void run_test(const char *haystack,
const char *needle, size_t len, const char *expected)
{
    char *result = ft_strnstr(haystack, needle, len);
    if ((result == NULL && expected == NULL) || 
	(result != NULL && expected != NULL && strcmp(result, expected) == 0)) {
        printf("Test passed: haystack=\"%s\", 
		needle=\"%s\", len=%zu\n", haystack, needle, len);
    } else {
        printf("Test failed: haystack=\"%s\", 
		needle=\"%s\", len=%zu\n", haystack, needle, len);
        if (result != NULL) {
            printf("Expected: \"%s\", but got \"%s\"\n", expected, result);
        } else {
            printf("Expected: \"%s\", but got NULL\n", expected);
        }
    }
}

int main()
{
    // Test cases
    run_test("Hello, World", "World", 12, "World");
    run_test("Hello, World", "World", 9, NULL);
    run_test("Hello, World", "", 12, "Hello, World");
    run_test("", "World", 12, NULL);
    run_test("Hello, World", "Hello", 5, "Hello");
    run_test("Hello, World", "Hello", 12, "Hello");
    run_test("Hello, World", "o, W", 12, "o, World");
    run_test("Hello, World", "o, W", 6, NULL);
    run_test("abcd", "bc", 4, "bcd");
    run_test("abcd", "bc", 2, NULL);
    run_test("abc", "c", 3, "c");
    run_test("abc", "d", 3, NULL);
    run_test("abc", "abc", 3, "abc");
    run_test("abc", "abcd", 3, NULL);
    run_test("a", "a", 1, "a");
    run_test("a", "b", 1, NULL);

    return 0;
}
*/
