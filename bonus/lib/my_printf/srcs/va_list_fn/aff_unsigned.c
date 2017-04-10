/*
** aff_unsigned.c for Printf in /home/invicta/PSU_2016_my_printf/srcs/va_list_fn/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Mon Nov 14 19:15:33 2016 Kellian CIPIERRE
** Last update Jan Dec 4 09:53:44 2016
*/

#include "my_print.h"

int		aff_unsigned(t_proto *proto, va_list list)
{
  int		i;
  unsigned int	result;

  i = 0;
  result = va_arg(list, unsigned int);
  if (proto->width > 0)
    {
      i = i + proto->width - my_intlen_base(result, 10);
      while (i > 0)
	{
	  i = i - 1;
	  my_putchar(' ');
	}
      proto->width = 0;
    }
  if (proto->pre == '#')
    proto->pre = '0';
  my_unsigned(result);
  return (0);
}
