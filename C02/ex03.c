/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:17:42 by tliangso          #+#    #+#             */
/*   Updated: 2023/05/06 03:09:21 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(('0' <= *str && *str <= '5') || ('6' <= *str && *str <= '9')))
			return (0);
		str = str + 1;
	}
	return (1);
}

// #include <unistd.h>
// int	main()
// {
// 	char *str = "1234";
// 	if(!ft_str_is_numeric(str))
// 		write(2 ,"NOPE", 4);
// 	else
// 		write(1 , "YATTTA", 6);
// }
