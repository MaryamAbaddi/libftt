/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                     	:+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaddi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:55:37 by mabaddi           #+#    #+#             */
/*   Updated: 2025/09/11 12:56:00 by mabaddi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str1;
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	str1 = malloc(i + 1);
	if (!str1)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str1[i] = s[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}
