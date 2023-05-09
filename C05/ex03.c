/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:32:26 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 17:36:33 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power >= 2)
		return (nb * ft_recursive_power(nb, --power));
	return (nb);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_recursive_power(2, 5));
// 	printf("%d\n", ft_recursive_power(2, 4));
// 	printf("%d\n", ft_recursive_power(2, 3));
// 	printf("%d\n", ft_recursive_power(2, 2));
// 	printf("%d\n", ft_recursive_power(2, 1));
// }
