/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jony <jony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:33:27 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 22:03:52 by jony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
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
		res[i] = f(s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

char ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int main(void)
{
	char *str = "hello";

	ft_strmap(str, &ft_putchar);
	return (0);
}