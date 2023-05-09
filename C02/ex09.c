/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex09.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:24:40 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 03:10:52 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	lalpha_or_not(char *str)
{
	return (('A' <= *str && *str <= 'Z'));
}

char	halpha_or_not(char *str)
{
	return (('a' <= *str && *str <= 'z'));
}

char	special_boy(char *str)
{
	return ((' ' <= *str && *str <= '/')
		|| (':' <= *str && *str <= '@')
		|| ('[' <= *str && *str <= '`')
		|| ('{' <= *str && *str <= '~') || (*str == '\t'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (*(str + i++))
		if (lalpha_or_not(str + i))
			*(str + i) = *(str + i) + ('a' - 'A');
	i = i - i - 1;
	while (special_boy(str + ++i))
		;
	*(str + i) = *(str + i) - ('a' - 'A');
	while (!(special_boy(&str[++i])))
		;
	while (str[i])
	{
		while (special_boy(&str[i]) && str[i])
			i++;
		if (halpha_or_not(str + i))
			*(str + i) -= ('a' - 'A');
		while (!(special_boy(&str[i])) && str[i])
			i++;
	}
	return (str);
}

// #include <string.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <stdio.h>

// int main(void)
// {
// 	char *str = "salut, comment tu vas ?
// 42mots  +quarante-deux; cinquante+et+un";
// 	char *to_test = strdup(str);
// 	int i = 0;

// 	printf("before = %s", str);
// 	ft_strcapitalize(to_test);
// 	write(1 ,"AFTER  = ",9);

// 	while(*(to_test + i))
// 	{
// 		write(1, (to_test + i) ,1);
// 		i++;
// 	}
// 	write(1 , "\n", 1);
// 	free(to_test);
// }
