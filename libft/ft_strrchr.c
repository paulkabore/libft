/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thereisonebody <thereisonebody@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 22:13:19 by thereisonebod     #+#    #+#             */
/*   Updated: 2024/08/14 12:36:54 by thereisonebod    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	long	i;
	long	index;

	i = 0;
	index = -1;
	while(*(s + i))
	{
		if (*(s + i) == c)
			index = s + i;
	}
	if (*(s + i) == c)
		return s + i;
	if (index >= 0)
		return s + index;
	return NULL;
}
