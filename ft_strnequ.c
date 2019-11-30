/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jony <jony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 13:20:04 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 22:03:19 by jony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int i;
	int res;

	if (n == 0)
		return (1);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i + 1 <= n)
		++i;
	res = s1[i] - s2[i];
	if (res == 0)
		return (1);
	else
		return (0);
}

int main(void)
{
	char *str1 = "tew";
	char *str2 = "tez";
	int n = 2;

	printf("%d", ft_strnequ(str1, str2, n));
	return (0);
}