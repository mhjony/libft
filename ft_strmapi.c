/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jony <jony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 20:12:27 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 22:03:47 by jony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char ft_putstr(unsigned int i, char s)
{
	if (i % 2 == 0)
		return (s - 32);
	else
		return (s);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int len;
	char *res;
	int i;

	len = 0;
	while (s[len] != '\0')
		len++;
	res = (char *)malloc(sizeof(*res) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

int main(void)
{
	char *str = "hello";

	printf("%s", ft_strmapi(str, &ft_putstr));
	return (0);
}