/*
** aff_nbr2.c for Printf in /home/invicta/PSU_2016_my_printf/srcs/va_list_fn/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Mon Nov 14 10:55:14 2016 Kellian CIPIERRE
** Last update Jan Dec 4 09:52:53 2016
*/

#include "my_print.h"

int	aff_nbr2(t_proto *proto, va_list list)
{
  int	i;
  int	result;

  i = 0;
  result = va_arg(list, int);
  if (proto->width > 0)
    {
      if (proto->pre != '0' && result != 0)
	i = i - 2;
      i = i + proto->width - my_intlen_base(result, 2);
      while (i > 0)
	{
	  my_putchar(' ');
	  i = i - 1;
	}
      proto->width = 0;
    }
  if (proto->pre == '#' && result != 0)
    my_putstr("0b");
  proto->pre = '0';
  my_putnbr_base(result, 2);
  return (0);
}
