/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschumac <nschumac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:54:56 by nschumac          #+#    #+#             */
/*   Updated: 2021/10/05 20:40:03 by nschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	char	*found;
	int		count;

	count = 0;
	found = 0;
	while (str[count] != '\0')
	{
		if (str[count] == chr)
			found = (char *)&str[count];
		count++;
	}
	if (str[count] == chr)
		found = (char *)&str[count];
	return (found);
}
