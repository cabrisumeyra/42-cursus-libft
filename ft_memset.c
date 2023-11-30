/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scabri <42kocaeli.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:15:53 by scabri            #+#    #+#             */
/*   Updated: 2023/10/29 17:15:54 by scabri           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*b, int c, size_t len)
{
	size_t			i;
	unsigned char	*dest;

	dest = (unsigned char *)b;
	i = 0;
	while (len--)
	{
		dest[i] = c;
		i++;
	}
	return (dest);
}
