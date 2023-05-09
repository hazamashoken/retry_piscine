/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:11:23 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 16:25:31 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[++i])
		;
	return (i);
}

void	ft_putdigit(int n, char *sign, int nbase)
{
	if (n >= nbase)
		ft_putdigit(n / nbase, sign, nbase);
	write(1, &sign[n % nbase], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	nbase;

	nbase = ft_strlen(base);
	ft_putdigit(nbr, base, nbase);
}

// int	main(void)
// {
// 	ft_putnbr_base(16, "0123456789abcdef");
// }
