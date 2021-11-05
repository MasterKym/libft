/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:35:34 by mkhalid           #+#    #+#             */
/*   Updated: 2021/11/05 10:26:23 by mkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	const int	*newsrc;

	newsrc = (const int *)src;
	while(n--)
	{
		*(char *)dst = *newsrc;
		newsrc++;
		dst++;
	}
    return (dst);
}

int main()
{
    char src[] = "memcpyy can be very useful....!";
    char src1[] = "memcpyy can be very useful....!";

    ft_memcpy(src+20, src+15, 11);
    memcpy(src1+20, src1+15, 11);
    printf("%s\n", src);
    printf("%s", src1);

    return 0;
}
