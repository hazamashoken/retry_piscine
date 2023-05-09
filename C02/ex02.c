/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:03:23 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 03:09:19 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!(('a' <= *str && *str <= 'z') || ('A' <= *str && *str <= 'Z')))
			return (0);
		str = str + 1;
	}
	return (1);
}

// #include <unistd.h>

// int	main()
// {
// 	char *str = "hello";
// 	if(!ft_str_is_alpha(str))
// 		write(2 ,"NOPE", 4);
// 	else
// 		write(1 , "YATTTA", 6);
// }
