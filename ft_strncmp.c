/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:14:02 by joyim             #+#    #+#             */
/*   Updated: 2024/06/14 12:35:28 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
		{
			return ((int)(s1[i] - s2[i]));
		}
		i++;
	}
	return (0);
}
/*
int main()
{
	char s1[4] = "what";
	char s2[4] = "whau";

	int result = ft_strncmp(s1, s2, 4);
	
	printf("%d", result);

return 0;
}
*/
