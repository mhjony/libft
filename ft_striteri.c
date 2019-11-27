/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jony <jony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 13:46:23 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 22:06:35 by jony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void ft_putstr(unsigned int i, char *s)
{
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int main(void)
{
	char *str = "hello";

	ft_striteri(str, &ft_putstr);
	return (0);
}