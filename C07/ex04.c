/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:41:29 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/16 13:36:06 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[++i])
		;
	return (i);
}

int	in_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
	{
		if (base[i] == c)
			return (i);
	}
	return (-1);
}

int	ft_valid_base(char *base)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(base);
	if (len == 1)
		return (1);
	i = -1;
	while (++i < len - 1)
	{
		j = i + 1;
		while (j < len)
			if (base[i] == base[j++])
				return (1);
	}
	while (*base)
	{
		if (in_base(*base, "+-\011\012\013\014\015 ") >= 0)
			return (1);
		base++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nbr;
	int	nbase;
	int	is_neg;

	is_neg = 1;
	nbr = 0;
	if (ft_valid_base(base))
		return (0);
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_neg = -is_neg;
		str++;
	}
	nbase = ft_strlen(base);
	while (*str && in_base(*str, base) != -1)
	{
		nbr = nbr * nbase + (in_base(*str, base));
		str++;
	}
	return (nbr * is_neg);
}

int	ft_base_len(int nbr, int base)
{
	int	len;

	len = 0;
	while (nbr > 0)
	{
		nbr /= base;
		len++;
	}
	if (len == 0)
		return (1);
	return (len);
}

char	*ft_itoa_base(int nbr, char *base)
{
	char	*ret;
	int		len;
	int		nbase;
	int		i;
	int		neg;

	neg = 1;
	len = 0;
	if (nbr < 0)
	{
		neg = -1;
		nbr = -nbr;
		len = 1;
	}
	nbase = ft_strlen(base);
	len += ft_base_len(nbr, nbase);
	i = len;
	ret = (char *)malloc(len + 1);
	if (!ret)
		return (NULL);
	if (len == 0)
		return (ret[0] = base[0], ret[1] = 0, ret);
	while (nbr > nbase)
	{
		ret[--len] = base[nbr % nbase];
		nbr /= nbase;
	}
	ret[--len] = base[nbr % nbase];
	if (neg == -1)
		ret[0] = '-';
	return (ret[i] = 0, ret);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*ret;

	if (ft_valid_base(base_from) || ft_valid_base(base_to))
		return (NULL);
	while (*nbr == ' ' || ('\t' <= *nbr && *nbr <= '\r'))
		nbr++;
	nb = ft_atoi_base(nbr, base_from);
	ret = ft_itoa_base(nb, base_to);
	if (!ret)
		return (NULL);
	return (ret);
}

// int	main(void)
// {
// 	printf("x: %x\n", 1234567890);
// 	printf("c: %s\n", ft_convert_base("     \t\t\t-++---1234567890", "0123456789", "0123456789abcdef"));
// }

// int    main(void)
// {
// 	char *converted;
// 	converted = ft_convert_base("-101010", "01", "0123456789");
// 	printf("%s\n", converted);
// 	free(converted);

// 	converted = ft_convert_base("  -+1010102345678ff", "01", "0123456789abcdef");
// 	printf("%s\n", converted);
// 	free(converted);

// 	converted = ft_convert_base(" \t\f\v +34589qw", "01234567", "012");
// 	printf("%s\n", converted);
// 	free(converted);

// 	converted = ft_convert_base(" \t\f\v +asdf", "fgh", ".?");
// 	printf("%s\n", converted);
// 	free(converted);

// 	printf("%s\n", ft_convert_base(" \t\f\v +34589qw", "01234567", "0+12"));
// 	printf("%s\n", ft_convert_base(" \t\f\v +34589qw", "01234567", "012 "));
// 	printf("%s\n", ft_convert_base(" \t\f\v +34589qw", "012345-67", "012"));
// 	printf("%s\n", ft_convert_base(" \t\f\v +34589qw", "012\t34567", "012"));
// 	printf("%s\n", ft_convert_base(" \t\f\v +34589qw", "0", "012"));
// 	printf("%s\n", ft_convert_base(" \t\f\v +34589qw", "01", ""));
// 	printf("%s\n", ft_convert_base(" \t\f\v +34w", "01", "0123456789"));
// 	printf("%s\n", ft_convert_base(" \t\f\v +34w", "01", "!?"));
// }
