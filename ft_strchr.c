/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:51:46 by mkhalid           #+#    #+#             */
/*   Updated: 2021/11/12 20:04:21 by mkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	cc;
	char	*ss;

	cc = (char)c;
	ss = (char *)s;
	while (*ss)
	{
		if (*ss == cc)
			return (ss);
		ss++;
	}
	if (cc == '\0')
		return (ss);
	return (0);
}
