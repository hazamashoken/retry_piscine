/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:19:09 by tliangso          #+#    #+#             */
/*   Updated: 2023/05/06 03:09:24 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(('a' <= *str && *str <= 'h') || ('i' <= *str && *str <= 'z')))
			return (0);
		str = str + 1;
	}
	return (1);
}

// #include <unistd.h>
// int	main()
// {
// 	char *str = "aaaaawa";
// 	if(!ft_str_is_lowercase(str))
// 		write(2 ,"NOPE", 4);
// 	else
// 		write(1 , "YATTTA", 6);
// }
