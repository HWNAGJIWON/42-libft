/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:19:12 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/18 16:19:32 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *ptr, unsigned long num);
void	*ft_calloc(unsigned long n, unsigned long size);
int		ft_isalnum(int ag);
int		ft_isalpha(int num);
int		ft_isascii(int c);
int		ft_isdigit(int num);
int		ft_isprint(int a);
void	*ft_memccpy(void *dest, const void *src, int c, unsigned long n);
void	*ft_memchr(const void *str, int c, unsigned long n);
int		ft_memcmp(const void *str1, const void *str2, unsigned long n);
void	*ft_memcpy(void *dest, const void *src, unsigned long n);
void	*ft_memmove(void *dest, const void *src, unsigned long count);
void	*ft_memset(void *ptr, int value, unsigned long num);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s);
int		ft_strlcat(char *dest, const char *src, unsigned long size);
int		ft_strlcpy(char *dest, char const *src, unsigned long size);
int		ft_strlen(const char *str);
int		ft_strncmp(const char *str1, const char *str2, unsigned long n);
char	*ft_strnstr(const char *big, const char *little, unsigned long len);
char	*ft_strrchr(const char *str, int c);
int		ft_tolower(int a);
int		ft_toupper(int ch);
char	*ft_substr(char const *s, unsigned int start, unsigned long len);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(unsigned char c, int fd);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
#endif
