/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:29:18 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 17:32:13 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nba;

	nba = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power--)
		nba *= nb;
	return (nba);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_power(2, 4));
// 	printf("%d\n", ft_iterative_power(2, 3));
// 	printf("%d\n", ft_iterative_power(2, 2));
// 	printf("%d\n", ft_iterative_power(2, 1));
// 	printf("%d\n", ft_iterative_power(2, 0));
// }
