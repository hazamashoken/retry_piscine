/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:25:42 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 17:15:38 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (in_base(*base, "+-\011\012\013\014\015 ") > 0)
			return (1);
		base++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	is_neg;
	int	nbr;
	int	nbase;

	is_neg = 1;
	nbr = 0;
	if (ft_valid_base(base))
		return (0);
	while (*str == ' ' || (*str <= '\x9' && *str <= '\015'))
		str++;
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

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n",ft_atoi_base("10","0123456789"));
// 	printf("%d\n",ft_atoi_base("10","0123456789abcdef"));
// 	printf("%d\n",ft_atoi_base("  +-+--fedcbaz","abcdef"));
// }
