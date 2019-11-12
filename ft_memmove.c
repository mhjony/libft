/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jony <jony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:21:34 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 21:25:14 by jony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;
	size_t i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (d < s && (dst || src))
		ft_memcpy(dst, src, len);
	else
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (dst);
}

int main(void)
{
	char str1[50];
	char str2[50] = "mahmudul hasan";
	char *ret;

	ret = ft_memmove(str1, str2, 11);
	printf("%s", ret);
	return (0);
}