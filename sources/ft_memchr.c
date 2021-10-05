/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschumac <nschumac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:54:16 by nschumac          #+#    #+#             */
/*   Updated: 2021/10/05 20:39:07 by nschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(void *ptr, int value, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		if (*((unsigned char *)ptr + count) == (unsigned char)value)
			return ((unsigned char *)ptr + count);
		count++;
	}
	return (0);
}
