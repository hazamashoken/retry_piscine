/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:09:25 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 03:58:23 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>

// int main(void)
// {
// 	int a;
// 	int b;
// 	int div_result;
// 	int mod_result;

// 	a = 10;
// 	b = 2 ;

// 	ft_div_mod(a ,b , &div_result, &mod_result );
// 	printf("a = %d b = %d div = %d mod  = %d\n", a, b, div_result, mod_result);
// }
