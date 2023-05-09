/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 14:17:27 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 14:59:27 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdint.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
		ft_putchar(arr[i++] + 48);
}

int	ft_index(int *nb, int n)
{
	int	i;
	int	max;

	i = 0;
	max = 10 - n;
	while (i < n)
	{
		if (nb[i] == max)
			return (i - 1);
		if (i == (n - 1) && nb[i] < max)
			return (i);
		i++;
		max++;
	}
	return (-1);
}

void	ft_increment(int *nb, int n, int index)
{
	int	i;

	i = index + 1;
	nb[index]++;
	while (i <= n)
	{
		nb[i] = nb[i - 1] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	nb[11];
	int	i;

	i = 0;
	while (i++ < n)
		nb[i] = i;
	while (ft_index(nb, n) != -1)
	{
		i = ft_index(nb, n);
		ft_putstr(nb, n);
		ft_increment(nb, n, i);
		write(1, ", ", 2);
	}
	ft_putstr(nb, n);
}

// #include <stdio.h>

// int	main(void)
// {
// 	ft_print_combn(9);
// 	write(1, "\n", 1);
// 	ft_print_combn(8);
// 	write(1, "\n", 1);
// 	ft_print_combn(7);
// 	write(1, "\n", 1);
// 	ft_print_combn(6);
// 	write(1, "\n", 1);
// 	ft_print_combn(5);
// 	write(1, "\n", 1);
// 	ft_print_combn(4);
// 	write(1, "\n", 1);
// 	ft_print_combn(3);
// 	write(1, "\n", 1);
// 	ft_print_combn(2);
// 	write(1, "\n", 1);
// 	ft_print_combn(1);
// 	write(1, "\n", 1);
// }
