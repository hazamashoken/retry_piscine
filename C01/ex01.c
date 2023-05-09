/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:36:00 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/04 20:43:57 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	if (nbr)
		*********nbr = 42;
	write(STDERR_FILENO, "NO NO NO\n", 9);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	n = 100;
// 	int	*a = &n;
// 	int	**b = &a;
// 	int	***c = &b;
// 	int	****d = &c;
// 	int	*****e = &d;
// 	int	******f = &e;
// 	int	*******g = &f;
// 	int	********h = &g;

// 	printf("before = %d\n", n);
// 	ft_ultimate_ft(&h);
// 	printf("after = %d\n", n);
// 	return (0);
// }
