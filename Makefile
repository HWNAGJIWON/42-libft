# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/11 16:12:05 by jiwhwang          #+#    #+#              #
#    Updated: 2021/05/16 18:47:37 by jiwhwang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILE = ft_atio.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	   ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c\
	    ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c\
		 ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c\
		 ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c\
		 ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c\
		 ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

FILE_O = $(addsuffix .o, $(FILE))

PNTF =	ft_printf read_input get_conv get_data\
		get_num get_str get_wchar get_ptr\
		handle_flag handle_wp

PNTF_O = $(addprefix ft_printf/, $(addsuffix .o, $(PNTF)))

all: $(NAME)

$(NAME): $(FILE_O) $(PNTF_O)
	@ar rc $(NAME) $^
	@ranlib $(NAME)
	@echo "$(NAME) created"

%.o: %.c
	@gcc -Wall -Wextra -Werror -c $< -o $@

clean:
	@rm -f $(FILE_O) $(PNTF_O)
	@echo "$(NAME) clean done"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) fclean done"

re: fclean all

.PHONY: all clean fclean re
