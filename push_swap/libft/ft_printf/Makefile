# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: novasol <novasol@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 18:58:28 by asalas-s          #+#    #+#              #
#    Updated: 2022/11/03 18:50:43 by novasol          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c \
	ft_printf_utils.c \
	ft_printf_format.c \
	ft_libft_mod.c \
	ft_put_functions.c

OBJS=$(SRCS:.c=.o)

HDRS=ft_printf.h

NAME=libftprintf.a

RM=rm -rf

GCC=gcc

AR=ar -crs

FLAGS=-Wall -Wextra -Werror

LIBFT = $(LIBFT_PATH)/libft.a

LIBFT_PATH = ./libft

.c.o:
	$(GCC) $(FLAGS) -c $< -o $(<:.c=.o) -I $(LIBFT_PATH)

all: $(LIBFT) $(NAME)

$(LIBFT):
	make bonus -C $(LIBFT_PATH)

$(NAME):$(OBJS) $(HDRS)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

re: clean fclean all

clean:
	make clean -C $(LIBFT_PATH)
	$(RM) $(OBJS)

fclean:clean
	make fclean -C $(LIBFT_PATH)
	$(RM) $(NAME)
.PHONY:
	all clean fclean re libft