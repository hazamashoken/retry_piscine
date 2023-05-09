/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:14:00 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/07 15:41:16 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = 0;
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while
	(
		str
		[++len]
	)
		;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		tlen;
	int		index;
	char	*ret;
	int		mysize;

	index = 0;
	tlen = 0;
	tlen += (size - 1) * ft_strlen(sep);
	mysize = size;
	while (size--)
		tlen += ft_strlen(strs[index++]);
	ret = (char *)malloc(tlen);
	if (!ret)
		return (NULL);
	*ret = 0;
	index = 0;
	while (mysize--)
	{
		if (index != 0)
			ft_strcat(ret, sep);
		ft_strcat(ret, strs[index++]);
	}
	return (ret);
}

#include <stdio.h>

// int	main(void)
// {
// 	char	*str[] = {"hello", "world", "its", "a", "meee", "MARIO"};

// 	printf(">%s\n", ft_strjoin(6, str, ":><:"));
// }
