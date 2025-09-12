/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaddi <mabaddi@student.42.fr>   		    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 18:50:00 by mabaddi           #+#    #+#             */
/*   Updated: 2025/09/07 19:00:00 by mabaddi	      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char
	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		count;
	char		*sub;

	i = 0;
	count = 0;
	while (s[count] != '\0')
		count++;
	if (start < count)
	{
		len = count - start;
		sub = malloc (len + 1);
		if (!sub)
			return (NULL);
		while (i < len)
			sub[i++] = s[start++];
		sub[i] = '\0';
		return (sub);
	}
	sub = malloc(1);
	if (!sub)
		return (NULL);
	sub[0] = '\0';
	return (sub);
}
