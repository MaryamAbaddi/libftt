/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaddi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:55:37 by mabaddi           #+#    #+#             */
/*   Updated: 2025/09/11 12:56:00 by mabaddi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*str;

	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	lens1 = 0;
	lens2 = 0;
	while (s1[lens1] != '\0')
	{
		str[lens1] = s1[lens1];
		lens1++;
	}
	while (s2[lens2] != '\0')
	{
		str[lens1] = s2[lens2];
		lens1++;
		lens2++;
	}
	str[lens1] = '\0';
	return (str);
}
