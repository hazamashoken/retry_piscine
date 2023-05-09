/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 23:50:48 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/09 16:24:47 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "ex02.h"

int	ft_strcmp(char *a, char *b)
{
	while (*a && *b)
	{
		if ((unsigned char)*a != (unsigned char)*b)
			return ((unsigned char)*a - (unsigned char)*b);
		a++;
		b++;
	}
	return (0);
}

int	ft_isnum(char *str)
{
	while (*str)
	{
		if ('0' > *str || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	is_neg;

	is_neg = 1;
	i = 0;
	while (*str)
	{
		i = i * 10 + (*str - '0');
		str++;
	}
	return (i * is_neg);

}

int	ft_create_queue(t_queue *q, int len)
{

}


void	ft_print_tail(int fd, int offset)
{
	t_queue	q;
	char	c;

	if (!ft_create_queue())

}

int	main(int argc, char **argv)
{
	int	len;
	int	i;
	int	r;

	r = 0;
	len = -1;
	if (argc >= 3 && ft_strcmp(argv[1], "-c") == 0 && ft_isnum(argv[2]))
		len = ft_atoi(argv[2]);
	else
		return (1);
	if (len < 0)
		return (ft_print_option_err(argv[0], "illegal offset -- ", argv[2]));
	if (argc == 3)
		ft_print_tail(0, len);
	i = 3;
	while (i < argc)
	{
		if (argc == 4)
			ft_print_file(argv[0], argv[i], len, 0);
		else
			r += ft_print_file(argv[0], argv[i], len, r + 1);
		i++;
	}
	return (0);
}
