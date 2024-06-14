/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 18:09:45 by joyim             #+#    #+#             */
/*   Updated: 2024/06/14 12:33:16 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int main()
{
	char test;


	printf("enter a char:");
	scanf("%c", &test);

	if(ft_isalpha(test))
	{
		printf("%c is an alpha, ", test);
	}
	else
	{
		printf("%c is not an alpha", test);
	}

	return 0;
}
*/
