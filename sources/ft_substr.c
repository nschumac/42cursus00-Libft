/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschumac <nschumac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 15:54:27 by nschumac          #+#    #+#             */
/*   Updated: 2021/10/05 21:32:48 by nschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	count;
	size_t	str_len;

	count = 0;
	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len) 
		return (ft_strdup(""));
	substr = (char *)malloc(str_len - start + 1);
	if (!substr)
		return (substr);
	while (count < len && s[start + count] != '\0')
	{
		substr[count] = s[start + count];
		count++;
	}
	substr[count] = '\0';
	return (substr);
}
