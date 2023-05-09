/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:22:24 by tliangso          #+#    #+#             */
/*   Updated: 2023/05/04 21:37:36 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;
}

// #include <stdio.h>

// int main(void)
// {
// 	int a = 10;
// 	int b = 3;

// 	printf("before = %d and %d\n", a, b);
// 	ft_ultimate_div_mod(&a ,&b);
// 	printf("after = %d and %d\n", a, b);
// }
