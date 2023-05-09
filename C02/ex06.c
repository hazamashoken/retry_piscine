/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:20:11 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 03:09:59 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int	find_printable_front(void)
{
	int	i;

	i = 0;
	while (i < ' ')
		i++;
	return (i);
}

int	find_printable_back(void)
{
	int	a;

	a = find_printable_front();
	a *= 4;
	a -= ('V' - 84);
	return (a);
}

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(find_printable_front() <= *str && *str <= find_printable_back()))
			return (0);
		str = str + 1;
	}
	return (1);
}

// #include <unistd.h>
// int	main()
// {
// 	char *str = "AAAAAAA";
// 	if(!ft_str_is_printable(str))
// 		write(2 ,"NOPE", 4);
// 	else
// 		write(1 , "YATTTA", 6);
// }
