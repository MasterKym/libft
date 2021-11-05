/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:13:00 by mkhalid           #+#    #+#             */
/*   Updated: 2021/11/05 15:43:30 by mkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *strrchr(const char *s, int c)
{
    char    cc;
    char    *ss;
	size_t	size;

	size = ft_strlen((char *)s);
	ss = (char *)(s + size);
	cc = (char)c;

	while (ss > s)
	{
		if(*ss == cc)
			return (ss);
		ss--;
	}
	return (0);
}
