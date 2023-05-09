/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:25:11 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 17:11:13 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// #include <limits.h>
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_atoi("    +++--++---2147483647"));
// 	printf("%d\n", ft_atoi("-----2147483648"));
// 	printf("%d\n", ft_atoi("1"));
// }
