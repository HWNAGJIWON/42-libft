/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:34:36 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/21 20:49:44 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
void				ft_bzero(void *ptr, size_t num);
void				*ft_calloc(size_t n, size_t size);
int					ft_isalnum(int ag);
int					ft_isalpha(int num);
int					ft_isascii(int c);
int					ft_isdigit(int num);
int					ft_isprint(int a);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memchr(const void *str, int c, size_t n);
int					ft_memcmp(const void *str1, const void *str2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t count);
void				*ft_memset(void *ptr, int value, size_t num);
char				*ft_strchr(const char *str, int c);
char				*ft_strdup(const char *s);
int					ft_strlcat(char *dest, const char *src, size_t size);
int					ft_strlcpy(char *dest, char const *src, size_t size);
int					ft_strlen(const char *str);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
char				*ft_strnstr(const char *big, \
		const char *little, size_t len);
char				*ft_strrchr(const char *str, int c);
int					ft_tolower(int a);
int					ft_toupper(int ch);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putchar_fd(unsigned char c, int fd);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, \
		void *(*f)(void *), void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
#endif
