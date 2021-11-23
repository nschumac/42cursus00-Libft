/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikolai <nikolai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:17:17 by nschumac          #+#    #+#             */
/*   Updated: 2021/11/23 22:51:21 by nikolai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			count;

	count = 0;
	while (count + 1 < n && str1[count] != '\0' && str1[count] == str2[count])
		count++;
	return (str1[count] - str2[count]);
}
