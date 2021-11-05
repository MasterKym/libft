/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:19:03 by mkhalid           #+#    #+#             */
/*   Updated: 2021/11/05 10:41:54 by mkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 size_t isn't defined here until <unistd.h> is included
*/
#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
