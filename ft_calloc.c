/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaddi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:56:54 by mabaddi           #+#    #+#             */
/*   Updated: 2025/09/11 13:18:11 by mabaddi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*str;
	size_t	size1;
	size_t	i;

	str = malloc(n * size);
	if (!str)
		return (NULL);
	size1 = n * size;
	i = 0;
	while (i < size1)
	{
		str[i] = 0;
			i++;
	}
	return (str);
}
