/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jony <jony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:37:09 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 22:06:56 by jony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcpy(char *dst, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int main(void)
{
	char src[50], dest[50];

	strcpy(src, "This is source");
	strcpy(dest, "This is destination");

	//ft_strcpy(str1, str2);
	printf("%s\n%s", src, dest);
	return (0);
}