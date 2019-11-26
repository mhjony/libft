/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jony <jony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 14:08:49 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 21:30:43 by jony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *src)
{
	char *tab;
	int i;
	int len;

	len = 0;
	while (src[len] != '\0')
		len++;
	if (!(tab = (char *)malloc(sizeof(*src) * (len + 1))))
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

int main(void)
{
	char *str;

	str = "mahmudul";
	printf("Before Allocation: %s\n", str);
	printf("After  Allocation: ");
	printf("%s\n", ft_strdup(str));
	return (0);
}