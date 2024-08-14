/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thereisonebody <thereisonebody@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 22:13:19 by thereisonebod     #+#    #+#             */
/*   Updated: 2024/08/14 12:27:43 by thereisonebod    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;

	i = 0;
	while(*(s + i))
	{
		if (*(s + i) == c)
			return s + i;
	}
	if (*(s + i) == c)
		return s + i;
	return NULL;
}
