/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:44:06 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/17 15:51:11 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int		i;
	char	*tmp;

	i = -1;
	while (tab[++i + 1])
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
	}
}
/*
int	ft_strcmp(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		if ((unsigned char)*str1 != (unsigned char )*str2)
			return ((unsigned char)*str1 - (unsigned char )*str2);
		str1++;
		str2++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int main(int ac, char ** av)
{
 	ft_advanced_sort_string_tab(av, ft_strcmp);
 	int i = 0;

 	while (av[i])
 	{
 		printf("%s\n" , av[i]);
 		i++;
	}
}
*/

