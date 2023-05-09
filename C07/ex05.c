/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:32:03 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/08 02:02:32 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char	ft_isstrchr(char c, char *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

unsigned int	ft_wordcount(char *str, char *charset)
{
	unsigned int	count;

	count = 0;
	while (*str)
	{
		while (!ft_isstrchr(*str, charset) && *str)
			str++;
		count++;
		while (ft_isstrchr(*str, charset) && *str)
			str++;
	}
	return (count);
}

char	*ft_makeword(char **str, char *charset)
{
	char			*word;
	unsigned int	len;
	unsigned int	s;

	s = 0;
	len = 0;
	while (ft_isstrchr(**str, charset) && *str)
		(*str)++;
	while (ft_isstrchr((*str)[len], charset) && str[len])
		len++;
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	while (!ft_isstrchr(**str, charset) && **str)
		word[s++] = *(*str)++;
	word[s] = 0;
	return (word);
}

char	**ft_freesplit(char **ret, unsigned int nret)
{
	while (nret)
		free(ret[nret--]);
	free(ret);
	return (NULL);
}

char	**ft_split(char *str, char *charset)
{
	char			**ret;
	unsigned int	nret;
	unsigned int	words;

	nret = 0;
	words = ft_wordcount(str, charset);
	if (!words)
	{
		ret = (char **)malloc(1 * sizeof(char *));
		if (!ret)
			return (NULL);
		*ret = 0;
		return (ret);
	}
	ret = (char **)malloc((words + 1) * sizeof(char *));
	if (!ret)
		return (NULL);
	while (*str)
	{
		ret[nret] = ft_makeword(&str, charset);
		if (!ret[nret])
			return (ft_freesplit(ret, nret));
		nret++;
	}
	ret[nret] = 0;
	return (ret);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	**ret;

// 	ret = ft_split("hello world this is a test", " ");
// 	while (*ret)
// 		printf("%s\n", *ret++);
// }
