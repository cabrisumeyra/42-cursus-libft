/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scabri <scabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:15:24 by scabri            #+#    #+#             */
/*   Updated: 2023/11/04 16:50:01 by scabri           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*str;
	size_t			i;

	i = 0;
	dst = (unsigned char *)dest;
	str = (unsigned char *)src;
	if (!dst && !str)
	{
		return (0);
	}
	while (n--)
	{
		dst[i] = str[i];
		i++;
	}
	return (dst);
}
