/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:27:09 by dikhalil          #+#    #+#             */
/*   Updated: 2025/08/24 17:55:26 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				len;
	unsigned char		*d;
	const unsigned char	*s;

	len = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src && n)
		return (0);
	while (len < n)
	{
		d[len] = s[len];
		len++;
	}
	return (dest);
}
