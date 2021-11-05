/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:30:55 by mkhalid           #+#    #+#             */
/*   Updated: 2021/11/05 10:50:27 by mkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	ds;
	size_t	ss;
	size_t	ret;
	size_t	i;

	ss = ft_strlen(src);
	ds = ft_strlen(dst);
	if( ds < dstsize)
		ret = ds + ss;
	else
		ret = dstsize + ss;
	i = 0;
	while(src[i] && i < dstsize - ds - 1)
	{
		dst[i + ds] = src[i];
		i++;
	}
	dst[i + ds] = '\0';
	return (ret);
}

#include <stdio.h>
int main()
{

    char src[] = "Hello";
    char src1[] = "Hello";

    ft_strlcat(src, src1, 10);
    printf("%s", src);
    return 0;
}
