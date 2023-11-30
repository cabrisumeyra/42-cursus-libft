/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scabri <scabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:18:33 by scabri            #+#    #+#             */
/*   Updated: 2023/11/04 16:26:36 by scabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size;

	size = ft_strlen(dst);
	i = size;
	if (dstsize <= size)
		return (dstsize + ft_strlen(src));
	while (src[size - i] && size + 1 < dstsize)
	{
		dst[size] = src[size - i];
		size++;
	}
	if (i < dstsize)
	{
		dst[size] = '\0';
	}
	return (i + ft_strlen(src));
}
