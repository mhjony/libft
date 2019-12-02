/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jony <jony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:22:57 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 22:03:00 by jony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *str, const char *to_find, size_t len)
{
	unsigned int i;
	unsigned int j;

	if (to_find[0] == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && (i + j) < len)
		{
			if (to_find[j + 1] == '\0')
			{
				return ((char *)str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int main()
{
	char haystack[20] = "TutorialsPoint";
	char needle[10] = "als";
	char *ret;

	ret = ft_strnstr("lorem ipsum dolor sit amet", "sit", 10);

	printf("%s\n", ret);
	printf("%s", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 17));

	return (0);
}