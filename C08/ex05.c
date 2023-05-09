/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:00:51 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/08 22:04:54 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex04.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

static int	ft_strlen(char *str)
{
	int	len;

	len = -1;
	while (str[++len])
		;
	return (len);
}

void	ft_putnbr(int nbr)
{
	if (nbr > 10)
		ft_putnbr(nbr / 10);
	write(1, &"0123456789"[nbr % 10], 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].copy, ft_strlen(par[i].copy));
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	t_stock_str	*stock;

	stock = ft_strs_to_tab(ac, av);
	if (!stock)
		return (1);
	ft_show_tab(stock);
	while (ac--)
		free(stock[ac].copy);
	free(stock);
	return (0);
}
