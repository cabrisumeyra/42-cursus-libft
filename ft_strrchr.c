/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scabri <42kocaeli.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:20:11 by scabri            #+#    #+#             */
/*   Updated: 2023/10/29 17:20:12 by scabri           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int c)
{
	char	*str;
	int		len;

	str = (char *) s;
	len = ft_strlen(str) + 1;
	while (len--)
	{
		if (str[len] == (char)c)
			return (&str[len]);
	}
	return (0);
}
