/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 23:04:59 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/09 00:36:28 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <libgen.h>
#include <string.h>
#include <errno.h>

void	ft_cat_no_av(void)
{
	int		len;
	char	buffer[520];

	len = read(1, buffer, 520);
	while (len > 0)
	{
		write(1, buffer, len);
		len = read(1, buffer, 520);
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

int	ft_perror(char	*str)
{
	write(1, "cat: ", 5);
	write(1, basename(str), ft_strlen(basename(str)));
	write(1, ": ", 2);
	write(1, strerror(errno), ft_strlen(strerror(errno)));
	write(1, "\n", 1);
	return (1);
}

int	ft_cat(int ac, char **av)
{
	int		len;
	char	buffer[520];
	int		fd;
	int		i;
	int		ret;

	ret = 0;
	i = 0;
	while (++i < ac)
	{
		fd = open(av[i], O_RDONLY);
		if (fd < 0)
			ret = ft_perror(av[i]);
		else
		{
			len = read(fd, buffer, 1);
			while (len > 0)
			{
				write(1, buffer, len);
				len = read(fd, buffer, 1);
			}
			ret = close(fd);
		}
	}
	return (ret);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		ft_cat_no_av();
	else
		return (ft_cat(ac, av));
	return (0);
}
