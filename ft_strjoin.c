/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 19:45:31 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/01/01 17:15:08 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*total;
	char	*ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	total = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (total == NULL)
		return (NULL);
	ptr = total;
	while (*s1 != '\0')
	{
		*total = *s1;
		total++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*total = *s2;
		total++;
		s2++;
	}
	*total = '\0';
	return (ptr);
}
