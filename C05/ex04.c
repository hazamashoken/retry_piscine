/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:36:42 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 17:50:48 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_fibonacci(4));
	printf("%d\n", ft_fibonacci(3));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(0));
}
