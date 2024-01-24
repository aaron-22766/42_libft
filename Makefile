# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 17:40:26 by arabenst          #+#    #+#              #
#    Updated: 2024/01/24 15:49:26 by arabenst         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra

AR		=	ar
ARFLAGS	=	rcs

RM		=	rm
RMFLAGS	=	-rf

SRCDIR	=	./src
OBJDIR	=	./obj

SRCS	=	$(wildcard $(SRCDIR)/*.c)
OBJS	=	$(addprefix $(OBJDIR)/,$(notdir $(SRCS:.c=.o)))

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(@D)
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(RMFLAGS) $(OBJDIR)

fclean: clean
	$(RM) $(RMFLAGS) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re