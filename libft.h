#ifndef LIBFT_H
# define LIBFT_H

// testing
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <stdlib.h>

// character check
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);

// string manipulation
size_t		ft_strlen(const char *s);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *big, const char *little, size_t len);

// memory
void		*ft_memset(void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);

// case conversion
int			ft_toupper(int c);
int			ft_tolower(int c);

// number conversion
int			ft_atoi(const char *str);

// memory allocation
void		*ft_calloc(size_t count, size_t size);
char		*ft_strdup(const char *s1);

#endif
