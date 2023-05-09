/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 05:24:18 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/07 05:24:48 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	while (--ac)
	{
		i = 0;
		j = 0;
		while (av[ac][j])
			j++;
		write(1, av[ac], j);
		write(1, "\n", 1);
	}
	return (0);
}
