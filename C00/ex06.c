/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:28:59 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 03:58:38 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	if (n > 10)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

void	ft_putnbr2(int n)
{
	if (n < 10)
		write(1, "0", 1);
	ft_putnbr(n);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			if (!(a == 0 && b == 1))
				write(1, ", ", 2);
			ft_putnbr2(a);
			write(1, " ", 1);
			ft_putnbr2(b);
			b++;
		}
		b = a + 1;
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
