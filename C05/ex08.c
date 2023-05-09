/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:31:43 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/07 05:12:44 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbrl(int *nbr)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = nbr[i++] + '0';
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}

int	validate(int *board, int x, int y)
{
	int	i;

	i = -1;
	while (++i < x)
		if (y == board[i]
			|| i + board[i] == x + y
			|| i - board[i] == x - y)
			return (0);
	return (1);
}

void	ft_solve(int board[10], int *res, int pos)
{
	int	i;
	int	k;

	if (pos == 10)
	{
		*res += 1;
		k = -1;
		ft_putnbrl(board);
	}
	else
	{
		i = -1;
		while (++i < 10)
		{
			if (validate(board, pos, i))
			{
				board[pos] = i;
				ft_solve(board, res, pos + 1);
			}
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	i;
	int	res;

	i = 0;
	while (i < 10)
		board[i++] = -1;
	res = 0;
	ft_solve(board, &res, 0);
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("res: %d\n", ft_ten_queens_puzzle());
// }
