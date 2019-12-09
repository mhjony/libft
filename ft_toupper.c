/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jony <jony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:05:50 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 21:35:41 by jony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	else
		return (c);
}

int main(void)
{
	char c = 'a';
	printf("%c", ft_toupper(c));
	return (0);
}