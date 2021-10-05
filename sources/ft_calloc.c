/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschumac <nschumac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:58:54 by nschumac          #+#    #+#             */
/*   Updated: 2021/10/05 21:13:39 by nschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*buf;
	size_t	count;

	count = 0;
	buf = 0;
	buf = malloc(num * size);
	if (!buf)
		return (0);
	while (count < num * size)
	{
		*((unsigned char *)buf + count) = 0;
		count++;
	}
	return (buf);
}
