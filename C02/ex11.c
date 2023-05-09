/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex11.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:25:01 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/08 22:23:18 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puthex(unsigned char n)
{
	if (n >= 16)
		ft_puthex(n / 16);
	write(1, &"0123456789abcdef"[n % 16], 1);
}

char	ft_isp(char c)
{
	return (' ' <= c && c <= '~');
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (ft_isp(*str))
			write(1, str, 1);
		else
		{
			write(1, "\\", 1);
			if ((unsigned char)*str < 16)
				write(1, "0", 1);
			ft_puthex(*str);
		}
		str++;
	}
}

// int	main(void)
// {
// 	ft_putstr_non_printable("Coucou\n\x80tu\xFF vas bien ?");
// 	write(1, "\n", 1);
// }
