/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex12.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:25:55 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/08 10:43:50 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puthex(unsigned long n)
{
	if (n > 16)
		ft_puthex(n / 16);
	write(1, &"0123456789abcdef"[n % 16], 1);
}

void	ft_puthexchar(char *addr, int size)
{
	int	i;

	i = 16;
	while (i--)
	{
		if (--size >= 0)
		{
			write(1, &"0123456789abcdef"[*addr / 16], 1);
			write(1, &"0123456789abcdef"[*addr++ % 16], 1);
		}
		else
			write(1, "  ", 2);
		if (size % 2 == 0)
			write(1, " ", 1);
	}
}

void	ft_putaddr(char *addr)
{
	unsigned long	tmp;
	int				i;

	tmp = (unsigned long)&*addr;
	i = 0;
	while (tmp)
	{
		i++;
		tmp /= 16;
	}
	while (i++ < 16)
		write(1, "0", 1);
	ft_puthex((unsigned long)&*addr);
	write(1, ": ", 2);
}

void	ft_putchar(char *addr, int size)
{
	int	i;

	i = 16;
	while (i-- > 0 && size-- > 0)
	{
		if (' ' <= *addr && *addr <= '~')
			write(1, addr, 1);
		else
			write(1, ".", 1);
		++addr;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	pad;

	pad = 0;
	while (size > 16)
	{
		ft_putaddr((char *)addr + pad);
		ft_puthexchar((char *)addr + pad, 16);
		ft_putchar((char *)addr + pad, 16);
		pad += 16;
		size -= 16;
	}
	ft_putaddr((char *)addr + pad);
	ft_puthexchar((char *)addr + pad, size);
	ft_putchar((char *)addr + pad, size);
	return (addr);
}

/*int	main(void)
{
	char str[] = "Bonjour les aminches\t\n\tc\a est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n \0";

	ft_print_memory(str, 92);
	return (0);
}*/
