/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschumac <nschumac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:37:13 by nschumac          #+#    #+#             */
/*   Updated: 2021/10/05 21:14:36 by nschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	count;
	char			*ret;

	if (!s || !f)
		return (0);
	ret = (char *)ft_strdup(s);
	if (!ret)
		return (0);
	count = 0;
	while (ret[count])
	{
		ret[count] = f(count, ret[count]);
		count++;
	}
	return (ret);
}
