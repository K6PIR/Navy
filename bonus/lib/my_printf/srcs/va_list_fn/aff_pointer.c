/*
** aff_pointer.c for Printf in /home/invicta/PSU_2016_my_printf/srcs/va_list_fn/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Mon Nov 14 21:48:37 2016 Kellian CIPIERRE
** Last update Jan Dec 4 09:53:31 2016
*/

#include <stdlib.h>
#include "my_print.h"

int	my_longlen_base(unsigned long result, int base)
{
  int	i;

  i = 0;
  while (result != 0)
    {
      result = result / base;
      i = i + 1;
    }
  return (i);
}

int	aff_pointer_null(t_proto *proto)
{
  int	i;
  char	*str;

  i = 0;
  str = ("(nil)");
  i = i + proto->width - my_strlen(str);
  while (i > 0)
    {
      i = i - 1;
      my_putchar(' ');
    }
  proto->width = 0;
  if (proto->pre == '#')
    proto->pre = '0';
  my_putstr(str);
  return (0);
}

int	aff_pointer(t_proto *proto, va_list list)
{
  int	i;
  char	*result;

  i = 0;
  if ((result = va_arg(list, char *)) == NULL)
    {
      aff_pointer_null(proto);
      return (0);
    }
  if (proto->width > 0)
    {
	i = i - 2;
      i = i + proto->width - my_longlen_base((unsigned long)(result), 16);
      while (i > 0)
	{
	  i = i - 1;
	  my_putchar(' ');
	}
      proto->width = 0;
    }
  if (proto->pre == '#')
    proto->pre = '0';
  my_put_pointer((unsigned long) (result));
  return (0);
}
