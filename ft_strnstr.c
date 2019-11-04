/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 11:18:03 by hnaji-el          #+#    #+#             */
/*   Updated: 2019/11/03 17:32:26 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		l;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	if (haystack == NULL && len == 0)
		return (NULL);
	while (haystack[i] != '\0' && len > 0)
	{
		j = 0;
		l = len;
		while (haystack[i + j] == needle[j] && l > 0)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
			l--;
		}
		i++;
		len--;
	}
	return (NULL);
}
