/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoabase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschumac <nschumac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:49:19 by nschumac          #+#    #+#             */
/*   Updated: 2021/10/20 15:58:33 by nschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_ulltoabase(unsigned long long num, const char *set)
{
	size_t	set_size;
	size_t	pow;
	char	*ret;
	int		count;

	set_size = ft_strlen(set);
	pow = 1;
	while (num / pow >= set_size)
		pow *= set_size;
	ret = (char *)malloc(pow / set_size + 2);
	if (!ret)
		return (NULL);
	count = 0;
	while (++count && pow > 0)
	{
		ret[count - 1] = set[(num / pow) % set_size];
		pow /= set_size; 
	}
	ret[count - 1] = '\0';
	return (ret);
}