/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:30:44 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 03:57:24 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *str = "HELLOW";

// 	int len = ft_strlen(str);

// 	printf("len = %d", len);
// }
