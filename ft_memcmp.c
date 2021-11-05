/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:10:41 by mkhalid           #+#    #+#             */
/*   Updated: 2021/11/05 19:21:15 by mkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char *s1c;
	unsigned char *s2c;

	s1c = (unsigned char *)s1;
	s2c = (unsigned char *)s2;
	i = 0;
	while(s1c[i] && s1c[i] == s2c[i] && i < n)
		i++;
	if(i < n)
		return (s1c[i] - s2c[i]);
	return (0);
}
