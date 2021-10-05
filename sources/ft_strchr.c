/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschumac <nschumac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:54:39 by nschumac          #+#    #+#             */
/*   Updated: 2021/10/05 21:24:05 by nschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(char *str, int chr)
{
	while (*str != '\0')
	{
		if (*str == (char) chr)
			return (str);
		str++;
	}
	if (*str == (char) chr)
		return (str);
	else
		return (0);
}
