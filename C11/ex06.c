/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:53:51 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/17 15:43:50 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

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

void	ft_sort_string_tab(char **tab)
{
	int		i;
	char	*tmp;

	i = -1;
	while (tab[++i + 1])
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
	}
}


// int main(int ac, char ** av)
// {
// 	ft_sort_string_tab(av);
// 	int i = 0;

// 	while (av[i])
// 	{
// 		printf("%s\n" , av[i]);
// 		i++;
// 	}
// }
