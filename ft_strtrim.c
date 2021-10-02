/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 22:58:19 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/09/23 16:02:56 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	compi(char const *ss1, char const *set1, int indexp, int j)
{
	while (ss1[indexp] != '\0' && set1[j] != '\0')
	{
		if (ss1[indexp] == set1[j])
		{
			indexp++;
			j = 0;
		}
		else
			j++;
	}
	return (indexp);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int				indexi;
	int				indexf;
	int				i;
	unsigned int	k;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	indexf = ft_strlen(s1) - 1;
	indexi = compi(s1, set, 0, 0);
	while (indexf >= 0 && set[i] != '\0')
	{
		if (s1[indexf] == set[i])
		{
			indexf--;
			i = 0;
		}
		else
			i++;
	}
	if ((indexf - indexi + 1) <= 0)
		k = 0;
	else
		k = indexf - indexi + 1;
	return (ft_substr(s1, indexi, k));
}
