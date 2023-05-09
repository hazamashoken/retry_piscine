/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 06:03:29 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/07 06:09:17 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*nb;
	int	size;

	size = max - min + 1;
	if (!size)
		return (NULL);
	nb = (int *)malloc(sizeof(int) * size);
	if (!nb)
		return (NULL);
	while (size)
		nb[--size] = max--;
	return (nb);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	*tab;

// 	tab = ft_range(-10, 10);
// 	for (int i = 0; i < 21; i++)
// 	{
// 		printf("%d ", tab[i]);
// 	}
// 	printf("\n");
// 	return (0);
// }

