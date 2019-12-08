/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jony <jony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:11:39 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 21:35:11 by jony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	else
		return (c);
}

int main(void)
{
	/*char c = 'A';
	printf("%c", ft_tolower(c));
	return (0);*/

	int i;
	int c;

	i = 'A';
	while (i <= 'Z')
	{
		c = ft_tolower(i);
		write(1, &c, 1);
		i++;
	}
	return (0);
}