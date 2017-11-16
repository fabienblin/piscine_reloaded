/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fablin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 09:46:02 by fablin            #+#    #+#             */
/*   Updated: 2017/11/09 15:28:35 by fablin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	char *end;

	end = (char *)s;
	while (*end)
		end++;
	return (end - s);
}

static void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dst);
}

static void		*ft_memset(void *b, int c, size_t len)
{
	char *mem;

	if (len)
	{
		mem = b;
		while (len--)
			*mem++ = c;
	}
	return (b);
}

static char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t src_len;

	src_len = ft_strlen(src);
	dst = (char *)ft_memcpy(dst, src, n);
	if (src_len < n)
		ft_memset(&dst[src_len], 0, n - src_len);
	return (dst);
}

char			*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	s_len;

	s_len = (size_t)ft_strlen(s1);
	if (!(dup = (char *)malloc(sizeof(char) * (s_len + 1))))
		return (NULL);
	dup[s_len] = 0;
	dup = ft_strncpy(dup, s1, s_len);
	return (dup);
}
