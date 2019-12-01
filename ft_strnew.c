/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jony <jony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 22:03:11 by jony              #+#    #+#             */
/*   Updated: 2019/11/04 22:03:13 by jony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnew(size_t size)
{
    char *ptr;
    unsigned char i;

    ptr = (char *)malloc(sizeof(char) * size + 1);
    if (!ptr)
        return (NULL);
    i = 0;
    while (i < size)
    {
        ptr[i] = '\0';
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}

int main(void)
{
    int size;

    size = 3;
    ft_strnew(3);
    return (0);
}