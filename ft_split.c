/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:11:12 by mkhalid           #+#    #+#             */
/*   Updated: 2021/11/09 12:05:46 by mkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char **ft_split(char const *s, char c)
//void ft_split(char const *s, char c)
{
	int	i;
	int	wcount;
	char	*set;
	char	*_s;
	char	**words;

	wcount = 0;
	i = -1;
	set = ft_calloc(2, 1);
	set[0] = c;
	_s = ft_strtrim(s, set);
	while(_s[++i])
	{
		if(_s[i] != c && (_s[i + 1] == c || _s[i + 1] == '\0'))
			wcount++;
	}
	printf("wcount ==> %d\n", wcount);
	words = malloc(sizeof(char *) * (wcount + 1));
	words[wcount] = 0;
	//create_word(_s, c, words);
	return (words);
}
