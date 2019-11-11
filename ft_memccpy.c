/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jony <jony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:33:39 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 22:09:50 by jony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return (dest + i + 1);
		++i;
	}
	return (NULL);
}

int main(void)
{
	char src[50] = "mahmudulhasanjony";
	char dest[50];
	char c = 'n';
	char *ret;

	ft_memccpy(dest, src, c, 25);
	printf("%s", dest);
	return (0);
}