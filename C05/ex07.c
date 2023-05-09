/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:58:01 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 18:31:31 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(++nb))
		;
	return (nb);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_find_next_prime(2147483646));
// 	printf("%d\n", ft_find_next_prime(2147483647));
// 	printf("%d\n", ft_find_next_prime(0));
// 	printf("%d\n", ft_find_next_prime(1));
// 	printf("%d\n", ft_find_next_prime(-1));
// 	printf("%d\n", ft_find_next_prime(1));
// 	printf("%d\n", ft_find_next_prime(10));
// 	printf("%d\n", ft_find_next_prime(100));
// }
