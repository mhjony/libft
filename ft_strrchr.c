/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jony <jony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:28:28 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 22:02:54 by jony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *ret;

	ret = 0;
	while (*s)
	{
		if (*s == c)
		{
			ret = (char *)s;
		}
		++s;
	}
	if (ret)
		return (ret);
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (0);
}

int main()
{
	char str[] = "http://wwwtutorialspointcom";
	char ch = '.';
	char *ret;

	ret = ft_strrchr(str, '.');
	printf("String after |%c| is - |%s|\n", ch, ret);
	return (0);
}