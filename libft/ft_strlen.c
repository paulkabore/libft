/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thereisonebody <thereisonebody@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 20:49:20 by thereisonebod     #+#    #+#             */
/*   Updated: 2024/08/14 12:30:18 by thereisonebod    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*(s + i) && ++i)
		;
	return i;
}
