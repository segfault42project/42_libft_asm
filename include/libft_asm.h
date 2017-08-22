#ifndef LIBFT_ASM_H
# define LIBFT_ASM_H

#include <stdlib.h>

int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_puts(char *str);
void	ft_bzero(void *buff, size_t size);
char	*ft_strcat(char *dst, const char *src);
void	ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, void *src, size_t n);
size_t	ft_strlen(char *str);

#endif
