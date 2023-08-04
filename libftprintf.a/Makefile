# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnazari <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/15 11:53:44 by mnazari           #+#    #+#              #
#    Updated: 2023/06/15 11:54:03 by mnazari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libftprintf.a

SRCS			=	ft_printf.c ft_libft.c ft_put_c_str.c ft_uitoa.c \
					ft_put_ptr.c ft_put_int_unit.c ft_put_hex.c \

OBJS			= $(SRCS:.c=.o)
CC				= gcc
RM				= rm -f
AR				= ar rcs
CFLAGS			= -Wall -Wextra -Werror

all:			$(NAME)

$(NAME):		$(OBJS)
				$(AR) $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus
