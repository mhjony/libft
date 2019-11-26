/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strequ_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jony <jony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 13:05:28 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 21:31:32 by jony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strequ(char const *s1, char const *s2)
{
	int i;
	int res;

	if (!s1 || !s2)
		return (s1 == s2 ? 1 : 0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	res = s1[i] - s2[i];
	if (res == 0)
		return (1);
	else
		return (0);
}

int main(void)
{
	char *str1 = "hello";
	char *str2 = "hello";

	printf("%d", ft_strequ(str1, str2));
	return (0);
}