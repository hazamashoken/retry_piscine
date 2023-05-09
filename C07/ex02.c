/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 06:09:31 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/07 15:13:25 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	ret;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	size = max - min + 1;
	if (!size)
		return (-1);
	ret = size - 1;
	*range = (int *)malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	while (size)
		(*range)[--size] = max--;
	return (ret);
}

// #include <stdio.h>

int	main(void)
{
	int	*tab;

	printf("d:%d\n", ft_ultimate_range(&tab, -10, 10));
	for (int i = 0; i < 21; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");
	return (0);
}
