/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 22:38:41 by dikhalil          #+#    #+#             */
/*   Updated: 2025/08/20 23:01:25 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*num;
	size_t	len;
	long	nbr;

	nbr = n;
	len = ft_intlen(n);
	num = malloc(len + 1);
	if (!num)
		return (NULL);
	num[len] = 0;
	if (nbr == 0)
		num[0] = '0';
	if (nbr < 0)
	{
		num[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		num[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (num);
}
