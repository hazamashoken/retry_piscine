/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 14:05:43 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 14:17:56 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdint.h>
#include <limits.h>

void	ft_putnbr(int nb)
{
	if (nb == INT_MIN)
	{
		write(1, "-2147483647", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
		return ;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	ft_putnbr(-12345);
// 	write(1, "\n", 1);
// 	ft_putnbr(-10);
// 	write(1, "\n", 1);
// 	ft_putnbr(12345);
// 	write(1, "\n", 1);
// 	ft_putnbr(INT_MAX);
// 	write(1, "\n", 1);
// 	ft_putnbr(INT_MIN);
// 	write(1, "\n", 1);
// }
