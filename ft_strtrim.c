/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 21:07:42 by dikhalil          #+#    #+#             */
/*   Updated: 2025/08/20 23:01:31 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set || !*set)
		return (ft_strdup(s1));
	len = ft_strlen(s1);
	if (len == 0)
		return (ft_strdup(""));
	i = 0;
	while (i < len && ft_strchr(set, s1[i]))
		i++;
	if (i == len)
		return (ft_strdup(""));
	j = len - 1;
	while (j > i && ft_strchr(set, s1[j]))
		j--;
	str = ft_substr(s1, i, j - i + 1);
	return (str);
}
