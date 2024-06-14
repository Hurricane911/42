/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:09:51 by joyim             #+#    #+#             */
/*   Updated: 2024/06/14 13:46:58 by joyim            ###   ########.fr       */
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

	ptr = malloc(element * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, element * size);
	return (ptr);
}
/*
int main()
{
size_t n = 10;
    int *arr = (int *)ft_calloc(n, sizeof(int));
    if (arr) {
        printf("Test 1 Passed: Normal allocation\n");
    } else {
        printf("Test 1 Failed: Normal allocation\n");
    }
    for (size_t i = 0; i < n; ++i) {
        if (arr[i] != 0) {
            printf("Test 1 Failed: Memory not initialized to zero\n");
            break;
        }
    }
    free(arr);

    // Test Case 2: Allocation of zero elements
    arr = (int *)ft_calloc(0, sizeof(int));
    if (arr == NULL) {
        printf("Test 2 Passed: Allocation of zero elements\n");
    } else {
        printf("Test 2 Failed: Allocation of zero elements\n");
    }
    free(arr);

    // Test Case 3: Allocation of zero-sized elements
    arr = (int *)ft_calloc(n, 0);
    if (arr == NULL) {
        printf("Test 3 Passed: Allocation of zero-sized elements\n");
    } else {
        printf("Test 3 Failed: Allocation of zero-sized elements\n");
    }
    free(arr);

    // Test Case 4: Allocation of large memory
    size_t large_size = 1024 * 1024 * 10; // 10 MB
    char *large_arr = (char *)ft_calloc(large_size, sizeof(char));
    if (large_arr) {
        printf("Test 4 Passed: Large memory allocation\n");
        for (size_t i = 0; i < large_size; ++i) {
            if (large_arr[i] != 0) {
                printf("Test 4 Failed: Large memory not initialized to zero\n");
                break;
            }
        }
    } else {
        printf("Test 4 Failed: Large memory allocation\n");
    }
    free(large_arr);

    // Test Case 5: Memory initialization to zero
    arr = (int *)ft_calloc(n, sizeof(int));
    int all_zero = 1;
    for (size_t i = 0; i < n; ++i) {
        if (arr[i] != 0) {
            all_zero = 0;
            break;
        }
    }
    if (all_zero) {
        printf("Test 5 Passed: Memory initialized to zero\n");
    } else {
        printf("Test 5 Failed: Memory not initialized to zero\n");
    }
    free(arr);
return 0;
}
*/
