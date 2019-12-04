/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jony <jony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:19:09 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 22:11:34 by jony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(char *str, const char *to_find)
{
	unsigned int i;
	unsigned int j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
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
	char needle[10] = "Point";
	char *ret;

	ret = ft_strstr(haystack, needle);

	printf("The substring is: %s\n", ret);

	return (0);
}