/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scabri <scabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:15:31 by scabri            #+#    #+#             */
/*   Updated: 2023/11/04 16:40:37 by scabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dst == src)
		return (dst);
	else if (dst < src)
		dst = ft_memcpy(dst, src, n);
	else
	{
		d = (unsigned char *)dst;
		s = (const unsigned char *)src;
		while (n--)
			d[n] = s[n];
	}
	return (dst);
}
