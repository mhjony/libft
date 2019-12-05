/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jony <jony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 15:04:13 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 22:02:33 by jony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *ptr;
	int i;

	ptr = (char *)malloc(sizeof(*ptr) * (len + 1));
	if (!ptr || !s)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int main(void)
{
	char *str1 = "lorem ispusm dolor sit amet";
	unsigned int start = 7;
	int len = 10;

	printf("%s", ft_strsub(str1, start, len));
	return (0);
}