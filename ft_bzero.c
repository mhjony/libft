/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jony <jony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:48:24 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 22:19:47 by jony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *b, size_t len)
{
	unsigned char *p;
	size_t i;

	p = b;
	i = 0;
	while (i < len)
	{
		p[i] = 0;
		i++;
	}
}

int main(void)
{
	char str[50];
	strcpy(str, "This is string.h library function");
	puts(str);
	ft_bzero(str, 2);
	puts(str);
	return (0);
}