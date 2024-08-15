#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>

size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, unsigned long n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strdup(const char *s);
void	*ft_memcpy(void *dest, const void *src, si    ze_t n);

#endif
