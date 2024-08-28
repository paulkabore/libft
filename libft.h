#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <locale.h>

typedef	enum bool {
	false,
	true
} bool;

void	ft_bzero(void *s, unsigned long n);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dsize);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strcat(char *dest, const char *src);

char	**ft_split(const char *s, int c);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);

int     ft_atoi(const char *nptr);
unsigned long int ft_factorial(unsigned int n);
long double ft_abs(long double x);
long double ft_sqrt(long double x);

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_iscntrl(int c);
int	ft_isdigit(int c);
int	ft_isgraph(int c);
int	ft_islower(int c);
int	ft_isprint(int c);
int	ft_ispunct(int c);
int	ft_isspace(int c);
int	ft_isupper(int c);
int	ft_isxdigit(int c);

int	ft_isascii(int c);
int	ft_isblank(int c);

int	ft_isalnum_l(int c, locale_t locale);
int	ft_isalpha_l(int c, locale_t locale);
int	ft_isblank_l(int c, locale_t locale);
int	ft_iscntrl_l(int c, locale_t locale);
int	ft_isdigit_l(int c, locale_t locale);
int	ft_isgraph_l(int c, locale_t locale);
int	ft_islower_l(int c, locale_t locale);
int	ft_isprint_l(int c, locale_t locale);
int	ft_ispunct_l(int c, locale_t locale);
int	ft_isspace_l(int c, locale_t locale);
int	ft_isupper_l(int c, locale_t locale);
int	ft_isxdigit_l(int c, locale_t locale); 
int	ft_isascii_l(int c, locale_t locale);

#endif
