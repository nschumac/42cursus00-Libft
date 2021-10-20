/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschumac <nschumac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 20:17:04 by nschumac          #+#    #+#             */
/*   Updated: 2021/10/20 16:10:03 by nschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_front(t_list **lst, t_list *toadd)
{
	if (!lst || !toadd)
		return ;
	(*toadd).next = *(lst);
	(*lst) = toadd;
}
