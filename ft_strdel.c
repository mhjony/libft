/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdel_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jony <jony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 10:11:12 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 21:29:44 by jony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_strdel(char **as)
{
	if (as && *as)
	{
		free(*as);
		*as = NULL;
	}
}

int main(void)
{
	int *p;
	char *c;

	c = "hello";
	p = &c;
	printf("%p", p);
	ft_strdel(p);
	return (0);
}