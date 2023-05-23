/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:19:55 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/17 17:56:54 by spiscine         ###   ########.fr       */
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
	while (begin_list->next != NULL)
	{
		begin_list = begin_list->next;
	}
	return (begin_list);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;
	t_list	*last;

	new = ft_create_elem(data);
	last = ft_list_last(*begin_list);
	last->next = new;
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*new;
	int		i;

	if (size == 0)
		return (NULL);
	if (size == 1)
		return (ft_create_elem(strs[i]));
	i = size;
	while (i != 0)
	{
		ft_list_push_back(&new, strs[i - 1]);
		i--;
	}
	return (new);
}

/*
int main(int ac , char** av)
{
	t_list	*new;

	new = ft_list_push_strs(ac,av);

	while (new)
	{
		printf("%s\n", new->data);
		new = new->next;
	}
}
*/
