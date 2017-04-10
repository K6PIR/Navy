##
## Makefile for Printf in /home/invicta/PSU_2016_my_printf/
##
## Made by Kellian CIPIERRE
## Login   <kellian.cipierre@epitech.eu>
##
## Started on  Fri Nov 11 17:14:39 2016 Kellian CIPIERRE
## Last update May Feb 2 08:56:19 2017
##

CC	= gcc

RM	= rm -rf

AR	= ar crs

CFLAGS	+= -I./include

NAME	= libmy_printf.a

SRCS	= srcs/my_printf.c \
	  srcs/my_strlen.c \
	  srcs/fn_ptr_tab.c \
	  srcs/my_intlen_base.c \
	  srcs/va_list_fn/aff_str.c \
	  srcs/va_list_fn/aff_char.c \
	  srcs/va_list_fn/aff_nbr2.c \
	  srcs/va_list_fn/aff_nbr8.c \
	  srcs/va_list_fn/aff_nbr10.c \
	  srcs/va_list_fn/aff_nbr16x.c \
	  srcs/va_list_fn/aff_nbr16X.c \
	  srcs/va_list_fn/aff_pointer.c \
	  srcs/va_list_fn/aff_unsigned.c \
	  srcs/va_list_fn/aff_str_octal.c \
	  srcs/aff_fn/my_putstr.c \
	  srcs/aff_fn/my_putchar.c \
	  srcs/aff_fn/my_put_nbr.c \
	  srcs/aff_fn/my_putnbr16x.c \
	  srcs/aff_fn/my_str_octal.c \
	  srcs/aff_fn/my_putnbr_base.c \
	  srcs/aff_fn/my_putunsigned.c \
	  srcs/aff_fn/my_put_pointer.c

OBJS	= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
