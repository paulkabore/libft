#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>

size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, unsigned long n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strdup(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(void *s, int c, size_t n);

int     ft_atoi(const char *nptr);
int	memcmp(const void *s1, const void *s2, size_t n);

#endif
