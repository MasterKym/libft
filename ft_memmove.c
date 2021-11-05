/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:36:51 by mkhalid           #+#    #+#             */
/*   Updated: 2021/11/05 11:37:13 by mkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;

	if(s + len >= d)
	{
		i = len;
		while(i--)
			d[i] = s[i];
	}
	else
	{
		i = 0;
		while(i < len)
			d[i] = s[i];
	}
	return (dst);
}
