/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:35:34 by mkhalid           #+#    #+#             */
/*   Updated: 2021/11/04 15:57:28 by mkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    int i;
    const void *newsrc;

    newsrc = src;
    i = 0;
    while (i < (int)n)
    {
        *(char *)dst = *(char *)newsrc;
        dst++;
        newsrc++;
        i++;
    }
    return (dst);
}

int main()
{
    char *src = "memcpyy can be very useful....!";

    ft_memcpy(src+20, src+15, 11);
    printf("%s", src);

    return 0;
}
