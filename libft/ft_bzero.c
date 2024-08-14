/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thereisonebody <thereisonebody@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 21:18:11 by thereisonebod     #+#    #+#             */
/*   Updated: 2024/08/14 12:29:52 by thereisonebod    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bzero(void *s, unsigned long n)
{
	unsigned long	i;
	char		*p;

	i = 0;
	p = (char *)s;
	while(i < n)
	{
		*(p + i) = '\0';
		++i;
	}
}
