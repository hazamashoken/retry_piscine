/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:56:37 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/17 16:58:37 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list	*begin_list)
{
	while(begin_list->next != NULL)
	{
		begin_list = begin_list->next;
	}
	return(begin_list);
}
