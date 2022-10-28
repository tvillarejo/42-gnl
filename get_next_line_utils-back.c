/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:21:59 by tvillare          #+#    #+#             */
/*   Updated: 2022/10/26 17:34:29 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptn;
	size_t	len;
	size_t	i;

	i = 0;
	len = size * count;
	if (len && len / size != count)
		return (NULL);
	ptn = malloc(len);
	if (ptn == NULL)
		return (ptn);
	while (len > i)
		((char *)ptn)[i++] = '\0';
	return (ptn);
}

char	*ft_strjoin(char const *s1, char const *s2, int equal)
{
	int		x1;
	int		x2;
	int		i;
	int		j;
	char	*ptn;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	x1 = ft_strlen((char *)s1);
	if (equal == -1)
		x2 = ft_strlen((char *)s2);
	else
		x2 = equal + 1;
	i = -1;
	j = 0;
	ptn = ft_calloc(sizeof(char), (x1 + x2 + 1));
	if (ptn == NULL)
		return (NULL);
	while (x1 > ++i)
		ptn[i] = (char)s1[i];
	while (x2 > j)
		ptn[i++] = (char)s2[j++];
	//if (equal != -1)
		//ptn[i++] = 10;
	ptn[i] = '\0';
	free ((char *)s1);
	return (ptn);
}

char	*ft_strdup(const char *s1, int equal)
{
	int		x;
	int		i;
	char	*s2;

	equal = 1;
	i = 0;
	//equal = -1;
	//if (equal == -1)
	x = ft_strlen(s1);
	//else
		//x = equal;
	s2 = ft_calloc(sizeof(*s1), (x + 1));
	if (NULL == s2)
		return (NULL);
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	//if (equal != -1)
		//s2[i] = 10;
	s2[i] = '\0';
	return (s2);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = ft_strlen((char *)src);
	if (dstsize != 0)
	{
		while ((src[i] != '\0') && ((dstsize - 1) > i) && (dstsize != 0))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (x);
}