/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:31:36 by mkhalid           #+#    #+#             */
/*   Updated: 2021/11/09 15:48:08 by mkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_abs(int n)
{
	if(n > 0)
		return (n);
	return (-n);
}

void	ft_putnbr_fd(int n, int fd)
{
	if(n < 0)
		ft_putchar_fd('-', fd);
	if(n < 10 && n >= 0)
	{
		ft_putchar_fd((char) (n + 48), fd);
		return;
	}
	ft_putnbr_fd(_abs(n / 10), fd);
	ft_putnbr_fd(_abs(n % 10), fd);
}

int	main()
{
	ft_putnbr_fd(0, 1);
}
