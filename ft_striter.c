/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jony <jony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:06:27 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 22:06:40 by jony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_striter(char *s, void (*f)(char *))
{
	while (*s)
	{
		f(s++);
	}
}

int main(void)
{
	char str[] = "hello";

	ft_striter(str, &ft_putchar);
	return (0);
}