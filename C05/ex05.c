/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:49:33 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 17:54:10 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(1234));
// 	printf("%d\n", ft_sqrt(64));
// 	printf("%d\n", ft_sqrt(9));
// 	printf("%d\n", ft_sqrt(10));
// 	printf("%d\n", ft_sqrt(-1));
// }
