/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scabri <scabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:17:41 by scabri            #+#    #+#             */
/*   Updated: 2023/11/03 14:35:14 by scabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*str, int c)
{
	while (*str != '\0' && *str != (char) c)
		str++;
	if (*str == (char) c)
		return ((char *) str);
	return (NULL);
}
