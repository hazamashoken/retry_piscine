/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 05:15:56 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/07 05:19:18 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	(void)ac;
	i = 0;
	while (av[0][i])
		i++;
	write(1, av[0], i);
	write(1, "\n", 1);
	return (0);
}
