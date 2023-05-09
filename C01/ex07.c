/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:32:50 by tliangso          #+#    #+#             */
/*   Updated: 2023/05/06 03:57:44 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = -1;
	while (++i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
	}
}

// #include <stdio.h>

// int main(void)
// {
// 	int a[] = {1, 2, 3, 4, 5};
// 	int i = 0;
// 	int len = 5;
// 	int *tmp;

// 	tmp = a;
// 	printf("before ");
// 	while (i < len)
// 	{
// 		printf("%d, ", *tmp);
// 		i++;
// 		tmp++;
// 	}

// 	i = 0;
// 	ft_rev_int_tab(a , len);
// 	printf("\nafter ");
// 	while (i < len)
// 	{
// 		printf("%d, ", a[i++]);
// 	}
// }
