/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:50:07 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/17 14:52:14 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

int	ft_atoi(char *str)
{
	int	is_neg;
	int	nbr;

	is_neg = 1;
	nbr = 0;
	while (*str == ' ' || (*str <= '\x9' && *str <= '\015'))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_neg = -is_neg;
		str++;
	}
	while (*str)
	{
		nbr = nbr * 10 + (*str - '0');
		str++;
	}
	return (nbr * is_neg);
}

void	ft_putnbr(int n)
{
	if (n == INT_MIN)
		write(1, "-2147483648", 12);
	if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-n);
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

void ft_plus(int a, int b)
{
	ft_putnbr(a + b);
}

void ft_minus(int a, int b)
{
	ft_putnbr(a - b);
}

void ft_divide(int a, int b)
{
	if (b == 0)
		write(1, "Stop : division by zero", 24);
	else
		ft_putnbr(a / b);
}

void ft_multi(int a, int b)
{
	ft_putnbr(a * b);
}

void ft_mod(int a, int b)
{
	if (b == 0)
		write(1, "Stop : modulo by zero", 22);
	else
		ft_putnbr(a % b);
}

void	init(void	(*f[5])(int, int))
{
	f[0] = ft_plus;
	f[1] = ft_minus;
	f[2] = ft_divide;
	f[3] = ft_multi;
	f[4] = ft_mod;
}

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

int	main(int ac, char **av)
{
	void	(*f[5])(int, int);
	char	op;

	if (ac != 4)
		return (0);
	op = *av[2];
	init(f);
	if (ft_strlen(av[2]) != 1)
		write(1, "0", 2);
	else if (op == '-')
		f[1](ft_atoi(av[1]), ft_atoi(av[3]));
	else if (op == '+')
		f[0](ft_atoi(av[1]), ft_atoi(av[3]));
	else if (op == '*')
		f[3](ft_atoi(av[1]), ft_atoi(av[3]));
	else if (op == '/')
		f[2](ft_atoi(av[1]), ft_atoi(av[3]));
	else if (op == '%')
		f[4](ft_atoi(av[1]), ft_atoi(av[3]));
	else
		write(1, "0", 2);
	write(1, "\n", 1);
	return (0);
}
