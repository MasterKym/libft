/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:03:31 by mkhalid           #+#    #+#             */
/*   Updated: 2021/11/09 14:08:25 by mkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(int n)
{
	int	size;

	if (n == 0)
		return (1);
	size = 0;
	while(n){
		n /= 10;
		size++;
	}
	return (size);
}

static int	l_abs(int	i)
{
	if (i < 0)
		return -i;
	return (i);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*number;
	int		sign;

	sign = 1;
	if(n < 0)
		sign = -1;
	size = get_size(n) + (sign == -1);
	number = malloc(sizeof(char) * (size + 1));
	if(!number)
		return (0);
	number[size] = '\0';
	while(size--)
	{
		number[size] = l_abs(n % 10) + 48;
		n /= 10;
	}
	if(sign == -1)
		number[0] = '-';
	return (number);
}
/*
#include <stdio.h>
int	main()
{
	int	n = -156;


	char *res = ft_itoa(n);
	printf("%s\n", res);
	printf("%lu", ft_strlen(res));
}
*/
