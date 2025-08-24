/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:02:43 by dikhalil          #+#    #+#             */
/*   Updated: 2025/08/14 01:12:34 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			len;
	unsigned char	*ptr;

	len = 0;
	ptr = (unsigned char *)s;
	while (len < n)
	{
		ptr[len++] = (unsigned char)c;
	}
	return (s);
}
