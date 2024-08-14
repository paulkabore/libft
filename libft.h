/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thereisonebody <thereisonebody@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:27:27 by thereisonebod     #+#    #+#             */
/*   Updated: 2024/08/13 22:12:43 by thereisonebod    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>

size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, unsigned long n);
char	*strchr(const char *s, int c);
char	*strrchr(const char *s, int c);

#endif
