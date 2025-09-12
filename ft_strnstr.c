/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                     	 :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaddi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:55:37 by mabaddi           #+#    #+#             */
/*   Updated: 2025/09/11 12:56:00 by mabaddi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little [j + 1] == '\0')
				return ((char *)(big + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
