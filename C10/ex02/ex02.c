/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 23:50:48 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/16 15:38:49 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <libgen.h>
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

void	ft_puterr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	write(2, str, i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	write(1, str, i);
}

void	ft_push_queue(t_queue *q, char *bytes, int size)
{
	int	i;

	if (q->size == 0)
		return ;
	i = 0;
	while (i < size)
	{
		q->data[q->pos] = bytes[i];
		++q->pos;
		if (q->pos == q->size)
			q->pos = 0;
		++q->len;
		if (q->len > q->size)
			q->len = q->size;
		i++;
	}
}

int	ft_create_queue(t_queue *q, int len)
{
	if (len > 0)
	{
		q->data = (char *)malloc(len);
		if (!q->data)
			return (0);
	}
	else
		q->data = NULL;
	q->size = len;
	q->len = 0;
	q->pos = 0;
	return (1);
}

void	ft_free_queue(t_queue *q)
{
	if (q->data)
		free(q->data);
	q->data = NULL;
	q->len = 0;
	q->pos = 0;
	q->size = 0;
}

void	ft_print_queue(t_queue *q)
{
	if (q->len != 0)
	{
		write(1, &(q->data[q->pos]), q->len - q->pos);
		write(1, &(q->data[0]), q->pos);
	}
}


void	ft_print_tail(int fd, int offset)
{
	t_queue	q;
	char	c;

	if (!ft_create_queue(&q, offset))
		return ;
	while (read(fd, &c, 1))
		ft_push_queue(&q, &c, 1);
	ft_print_queue(&q);
	ft_free_queue(&q);

}

int	ft_print_error(char *prog, char *file)
{
	ft_puterr(basename(prog));
	ft_puterr(": ");
	ft_puterr(file);
	ft_puterr(": ");
	ft_puterr(strerror(errno));
	ft_puterr("\n");
	return (0);
}

int	ft_print_option_err(char *prog, char *error, char *arg)
{
	ft_puterr(basename(prog));
	ft_puterr(": ");
	ft_puterr(error);
	ft_puterr(arg);
	ft_puterr("\n");
	return (1);
}



int	ft_print_file(char *appname, char *filename, int bytes, int print_name)
{
	int	file;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (ft_print_error(appname, filename));
	else
	{
		if (print_name > 0)
		{
			if (print_name > 1)
				ft_putstr("\n");
			ft_putstr("==> ");
			ft_putstr(basename(filename));
			ft_putstr(" <==\n");
		}
		ft_print_tail(file, bytes);
		close(file);
	}
	return (1);
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
