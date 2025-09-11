/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaddi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:55:37 by mabaddi           #+#    #+#             */
/*   Updated: 2025/09/11 12:56:00 by mabaddi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char
	*ft_strrchr(const char *s, int c)
{
	unsigned char	*last;
	unsigned char	a;

	last = NULL;
	a = (unsigned char)c;
	if (!s)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == a)
		{
			*last = *s;
		}
		s++;
	}
	if (a == '\0')
		return ((char *)s);
	return ((char *)last);
}
