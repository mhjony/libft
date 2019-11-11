/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memallloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jony <jony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 18:20:01 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 22:09:56 by jony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memalloc(size_t size)
{
    unsigned char *ptr;

    ptr = malloc(size);
    if (!ptr)
        return NULL;
    ft_memset(ptr, 0, size);
    return (ptr);
}

int main(void)
{
    int size;

    size = 3;
    ft_memalloc(3);
    return (0);
}