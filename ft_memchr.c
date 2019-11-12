/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jony <jony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:39:55 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 22:09:44 by jony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	int i;
	unsigned char *ptr;
	unsigned char character;

	ptr = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == character)
			return (ptr + i);
		i++;
	}
	return (NULL);
}

int main(void)
{
	char src[50] = "mahmudulhasanjony";
	char *ret;

	ret = ft_memchr(src, 's', 15);
	printf("%s", ret);
	return (0);
}