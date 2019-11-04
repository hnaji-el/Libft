/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 14:22:51 by hnaji-el          #+#    #+#             */
/*   Updated: 2019/11/03 18:14:05 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;
	size_t				i;
	size_t				r;

	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	i = 0;
	r = 0;
	if (n == 0)
		return (r);
	while ((ss1[i] == ss2[i] && ss1[i] != '\0') && i < n)
		i++;
	if (i == n)
		i--;
	r = ss1[i] - ss2[i];
	return (r);
}
