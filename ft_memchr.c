/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                         :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaddi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:55:37 by mabaddi           #+#    #+#             */
/*   Updated: 2025/09/11 12:56:00 by mabaddi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str1;
	unsigned char	x;
	size_t	i;

	i = 0;
	x = (unsigned char)c;
	str1 = (const unsigned char *)s;
	if (!str1)
		return (NULL);
	while (i < n)
	{
		if (str1[i] == x)
		{
			return ((void *)&str1[i]);
		}
		i++;
	}
	return (NULL);
}
