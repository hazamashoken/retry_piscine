/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:54:18 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 18:25:06 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 12;
	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0 || nb % 7 == 0)
		return (0);
	while (i - 1 <= nb)
	{
		if ((nb % (i - 1) == 0) || (nb % (i + 1) == 0)
			|| (nb % (i + 6 - 1) == 0) || (nb % (i + 6 + 1) == 0))
			break ;
		i += 10;
	}
	return ((nb == (i - 1)) || (nb == (i + 1))
		|| (nb == (i + 6 - 1)) || (nb == (i + 6 + 1)));
}


int	main(void)
{
	printf("%d\n", ft_is_prime(2147483647));
	printf("%d\n", ft_is_prime(2147483646));
	printf("%d\n", ft_is_prime(191));
	printf("%d\n", ft_is_prime(29));
	printf("%d\n", ft_is_prime(37));
	printf("%d\n", ft_is_prime(71));
	printf("%d\n", ft_is_prime(103));
	printf("%d\n", ft_is_prime(167));
	printf("%d\n", ft_is_prime(199));
}

