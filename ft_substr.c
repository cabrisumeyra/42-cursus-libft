/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scabri <scabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:20:41 by scabri            #+#    #+#             */
/*   Updated: 2023/11/04 14:00:47 by scabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const	*s, unsigned int start, size_t len)
{
	char	*str;

	if (start >= ft_strlen(s))
	{
		str = (char *)malloc(sizeof(char));
		if (!str)
			return (NULL);
		*str = '\0';
	}
	else
	{
		if (len > ft_strlen(s) - start)
			len = ft_strlen(s) - start;
		if (ft_strlen(s) >= len)
			str = (char *)malloc(sizeof(char) * len + 1);
		else
			str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
		if (str == NULL)
			return (NULL);
		ft_strlcpy(str, s + start, len + 1);
	}
	return (str);
}
