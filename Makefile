##
## Makefile for Makefile in /home/sachs_a/delivery/system_unix/PSU_2016_navy
##
## Made by Alexandre Sachs
## Login   <sachs_a@epitech.net>
##
## Started on  Mon Jan 30 10:53:57 2017 Alexandre Sachs
## Last update Jun Feb 10 11:55:27 2017
##

CC		= gcc

RM		= rm -rf

ARRC		= ar crs

MK		= make

SRC_BIN		= src/main.c					\
		  src/navy.c					\
		  src/attack.c					\
		  src/defense.c					\
		  src/game_over.c				\
		  src/hit_or_miss.c				\
		  src/position_verification.c			\
		  src/maps/update.c				\
		  src/maps/my_verif.c				\
		  src/maps/print_map.c				\
		  src/maps/check_size.c				\
		  src/maps/filling_map.c			\
		  src/maps/my_parse_fill.c			\
		  src/communications/connexion.c		\
		  src/communications/init_sigaction.c		\
		  src/communications/binary_reception.c		\
		  src/communications/target_reception.c		\
		  src/communications/binary_transmitter.c	\
		  src/communications/validation_sending.c

SRC_LIB		= src/basics/power.c			\
		  src/basics/tablen.c			\
		  src/basics/my_swap.c			\
		  src/basics/my_strlen.c		\
		  src/basics/my_strcmp.c		\
		  src/basics/my_getnbr.c		\
		  src/basics/my_strncmp.c		\
		  src/basics/get_next_line.c		\
		  src/basics/decimal_to_binary.c	\
		  src/basics/binary_to_decimal.c	\
		  src/basics/my_str_to_wordtab.c

OBJ_BIN		= $(SRC_BIN:.c=.o)

OBJ_LIB		= $(SRC_LIB:.c=.o)

CFLAGS		+= -I ./include/
CFLAGS		+= -I ./lib/my_printf/include/
CFLAGS		+= -W -Werror -Wall -Wextra -g

LDFLAGS		+= -L./lib/my -lmy
LDFLAGS		+= -L./lib/my_printf -lmy_printf

NAME_BIN	= ./navy

NAME_LIB	= ./lib/my/libmy.a

NAME_PRINT	= lib/my_printf/

$(NAME_BIN):	$(OBJ_LIB) $(OBJ_BIN)
		$(ARRC) $(NAME_LIB) $(OBJ_LIB)
		$(MK) -C $(NAME_PRINT)
		$(CC) -o $(NAME_BIN) $(OBJ_BIN) $(LDFLAGS)

all:		$(NAME_BIN)

clean:
		$(RM) $(OBJ_BIN)
		$(RM) $(OBJ_LIB)
		$(MK) clean -C $(NAME_PRINT)

fclean:		clean
		$(RM) $(NAME_BIN)
		$(RM) $(NAME_LIB)
		$(MK) fclean -C $(NAME_PRINT)

re:		fclean all

.PHONY:		all clean fclean re
