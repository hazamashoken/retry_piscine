/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:41:29 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/08 22:28:08 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
	return (len);
}

char	*ft_itoa_base(int nbr, char *base)
{
	char	*ret;
	int		len;
	int		nbase;
	int		i;

	nbase = ft_strlen(base);
	len = ft_base_len(nbr, nbase);
	i = len;
	ret = (char *)malloc(len + 1);
	if (!ret)
		return (NULL);
	while (nbr > nbase)
	{
		ret[--len] = base[nbr % nbase];
		nbr /= nbase;
	}
	ret[--len] = base[nbr % nbase];
	ret[i] = 0;
	return (ret);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*ret;

	if (ft_valid_base(base_from) || ft_valid_base(base_to))
		return (NULL);
	while (*nbr == ' ' || (*nbr <= '\x9' && *nbr <= '\015'))
		nbr++;
	nb = ft_atoi_base(nbr, base_from);
	ret = ft_itoa_base(nb, base_to);
	if (!ret)
		return (NULL);
	return (ret);
}

#include <stdio.h>

int	main(void)
{
	printf("x: %x\n", 1234567890);
	printf("c: %s\n", ft_convert_base("     \t\t\t-++---1234567890", "0123456789", "0123456789abcdef"));
}
