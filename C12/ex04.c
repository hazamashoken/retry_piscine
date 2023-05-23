/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:58:49 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/17 17:19:11 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}

t_list	*ft_list_last(t_list	*begin_list)
{
	while(begin_list->next != NULL)
	{
		begin_list = begin_list->next;
	}
	return(begin_list);
}

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;
	t_list	*last;

	new = ft_create_elem(data);
	last = ft_list_last(*begin_list);
	last->next = new;
}
#include <stdio.h>
int main()
{
	t_list *head;

	head = ft_create_elem(1);
	ft_list_push_back(&head, 2);
	ft_list_push_back(&head, 3);

	while(head)
	{
		printf("%d\n", head->data);
		head = head->next;
	}
}

