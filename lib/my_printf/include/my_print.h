/*
** my.h for Printf in /home/invicta/PSU_2016_my_printf/include/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Thu Nov 10 21:29:55 2016 Kellian CIPIERRE
** Last update Jan Dec 4 00:24:15 2016
*/

#include <stdarg.h>

#ifndef MY_PRINT_H_
# define MY_PRINT_H_

typedef struct	s_proto
{
	char	pre;
	int	width;
}		t_proto;

typedef struct	s_fnptr
{
  char		flag;
  int		(*p)(t_proto *proto, va_list list);
}		t_fnptr;

void		init_fnptr_tab(t_fnptr *fnptr_tab);
int		my_printf(char *str, ...);
int		my_strlen(char *str);
int		my_intlen_base(int result, int base);
int		my_putchar(char c);
int		my_putstr(char *str);
int		my_put_nbr(int	nb);
int		my_putnbr_base(unsigned int nb, int base);
int		my_putnbr16x(unsigned int nb);
int		my_unsigned(int nb);
int		my_put_str_octal(char *str);
int		my_put_pointer(unsigned long pointer);
int		aff_char(t_proto *proto, va_list list);
int		aff_str(t_proto *proto, va_list list);
int		aff_nbr2(t_proto *proto, va_list list);
int		aff_nbr8(t_proto *proto, va_list list);
int		aff_nbr10(t_proto *proto, va_list list);
int		aff_nbr16x(t_proto *proto, va_list list);
int		aff_nbr16X(t_proto *proto, va_list list);
int		aff_unsigned(t_proto *proto, va_list list);
int		aff_str_octal(t_proto *proto, va_list list);
int		aff_pointer(t_proto *proto, va_list list);

#endif		/* MY_PRINT_H_ */
