/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:36:00 by tliangso          #+#    #+#             */
/*   Updated: 2023/05/06 03:57:40 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = -1;
	while (++i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	tab[] = {3, 2, 4, 1, 5, 7};

// 	ft_sort_int_tab(tab, 6);
// 	for (int i = 0; i < 6; i++)
// 		printf("%d ", tab[i]);
// 	return (0);
// }
