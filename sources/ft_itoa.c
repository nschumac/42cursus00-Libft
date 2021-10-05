/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschumac <nschumac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:02:46 by nschumac          #+#    #+#             */
/*   Updated: 2021/10/05 22:50:24 by nschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static char	*ft_handlezero(void)
{
	char	*ret;

	ret = (char *)malloc(2);
	if (!ret)
		return (0);
	ret[0] = '0';
	ret[1] = '\0';
	return (ret);
}

char	*ft_itoa(int n)
{
	int		length;
	long	num;
	char	*yeet;

	if (n == 0)
		return (ft_handlezero());
	length = 1;
	num = n / 10;
	while (num != 0 && length++)
		num /= 10;
	if (n < 0)
		length++;
	yeet = (char *)malloc(length + 1);
	if (!yeet)
		return (0);
	if (n < 0)
		yeet[0] = '-';
	yeet[length] = '\0';
	while (n != 0)
	{
		yeet[--length] = (int) ft_llabs(n % 10) + '0';
		n /= 10;
	}
	return (yeet);
}
