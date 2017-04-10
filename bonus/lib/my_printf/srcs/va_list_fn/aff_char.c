/*
** aff_char.c for Printf in /home/invicta/PSU_2016_my_printf/srcs/va_list_fn/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Fri Nov 11 11:32:21 2016 Kellian CIPIERRE
** Last update Jan Dec 4 09:51:36 2016
*/

#include <unistd.h>
#include "my_print.h"

int	aff_char(t_proto *proto, va_list list)
{
  int	i;
  char	result;

  i = 0;
  if (proto->pre == '#')
    proto->pre = '0';
  result = va_arg(list, int);
  if (proto->width > 0)
    {
      i = proto->width + i - 1;
      while (i > 0)
	{
	  my_putchar(' ');
	  i = i - 1;
	}
      proto->width = 0;
    }
  my_putchar(result);
  return (0);
}
