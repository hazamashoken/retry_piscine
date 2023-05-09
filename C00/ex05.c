/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:15:41 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/04 18:28:57 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	num[3];

	num[0] = '0';
	num[1] = '1';
	num[2] = '2';
	while (num[0] <= '7')
	{
		while (num[1] <= '8')
		{
			while (num[2] <= '9')
			{
				if (!(num[0] == '0' && num[1] == '1' && num[2] == '2'))
					write(1, ", ", 2);
				write(1, num, 3);
				num[2]++;
			}
			num[2] = num[1] + 1;
			num[1]++;
		}
		num[1] = num[0] + 1;
		num[0]++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
