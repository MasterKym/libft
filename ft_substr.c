/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:51:54 by mkhalid           #+#    #+#             */
/*   Updated: 2021/11/07 17:46:28 by mkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	int	i;
	unsigned int	slen;

	if(!s)
		return (NULL);
	ret = malloc((len + 1) * sizeof(char));
	slen = (unsigned int)ft_strlen(s);
	if (start >= slen)
	{
		ret[0] = '\0';
		return (ret);
	}
	if(ret == NULL)
		return (0);
	i = 0;
	while(len--)
		ret[i++] = s[start++];
	ret[i] = '\0';
	return (ret);
}
