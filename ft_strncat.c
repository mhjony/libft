/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jony <jony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 14:01:25 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 22:03:39 by jony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t len)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < len && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	// Take any two strings
	char src[50] = "efghijkl";
	char dest[50] = "abcd";

	// Appends 5 character from src to dest
	ft_strncat(dest, src, 5);

	// Prints the string
	printf("Source string : %s\n", src);
	printf("Destination string : %s", dest);

	return 0;
}