# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfolio <rfolio@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 18:14:56 by rfolio            #+#    #+#              #
#    Updated: 2022/12/06 14:26:18 by rfolio           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfolio <rfolio@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 13:07:58 by rfolio            #+#    #+#              #
#    Updated: 2022/11/22 13:25:23 by rfolio           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	clang

CFLAGS		=	-Wall -Werror -Wextra -I

SRCS		=	ft_num_hexa.c ft_printf.c ft_num_p.c ft_putstr.c ft_unsnum_nbr.c libft/ft_itoa.c libft/ft_strdup.c libft/ft_strlen.c

OBJS		=	$(SRCS:.c=.o)

RM			=	rm -f

NAME		=	libftprintf.a

HEADER		=	./

all:		$(NAME)

.c.o:
			$(CC) $(CFLAGS) $(HEADER) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:		
			$(RM) $(OBJS)

fclean:		clean
				$(RM) $(OBJS) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re 