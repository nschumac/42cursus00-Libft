/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschumac <nschumac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:05:40 by nschumac          #+#    #+#             */
/*   Updated: 2021/10/20 16:10:11 by nschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_back(t_list **lst, t_list *toadd)
{
	t_list	*lstbuf;

	if (!lst || !toadd)
		return ;
	if (!(*lst))
	{
		*lst = toadd;
		return ;
	}
	lstbuf = *lst;
	while (lstbuf->next)
		lstbuf = lstbuf->next;
	lstbuf->next = toadd;
}
