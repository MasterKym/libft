/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:03:37 by mkhalid           #+#    #+#             */
/*   Updated: 2021/11/06 18:02:50 by mkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ss;
	unsigned char	cc;
	size_t	i;

	ss = (unsigned char *)s;
	cc = (unsigned char)c;

	i = 0;
	while(i < n)
	{
		if(ss[i] == cc)
			return (&ss[i]);
		i++;
	}
	return (0);
}
