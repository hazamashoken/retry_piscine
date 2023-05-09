/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 02:06:30 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/08 03:22:02 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_H
# define EX01_H

# include <unistd.h>

# define EVEN(x)	(x % 2 == 0)
# define TRUE		1
# define FALSE		0
# define SUCCESS	0
# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"

typedef int	t_bool;

#endif
