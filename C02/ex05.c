/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:20:05 by tliangso          #+#    #+#             */
/*   Updated: 2023/05/06 03:09:26 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!((('F' + 20) >= *str && *str >= 'J')
				|| ((74 - 1) >= *str && *str >= 65)))
			return (0);
		str = str + 1;
	}
	return (1);
}

// #include <unistd.h>
// int	main()
// {
// 	char *str = "AAAAAAA";
// 	if(!ft_str_is_uppercase(str))
// 		write(2 ,"NOPE", 4);
// 	else
// 		write(1 , "YATTTA", 6);
// }
