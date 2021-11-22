/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikolai <nikolai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:50:40 by nschumac          #+#    #+#             */
/*   Updated: 2021/11/22 22:08:38 by nikolai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = (long)n;
	if (num < 0 && write(fd, "-", 1))
		num *= -1;
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	ft_putchar_fd('0' + num % 10, fd);
}
