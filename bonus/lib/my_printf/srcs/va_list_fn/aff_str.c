/*
** aff_str.c for Printf in /home/invicta/PSU_2016_my_printf/srcs/va_list_fn/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Fri Nov 11 11:32:37 2016 Kellian CIPIERRE
** Last update Jan Dec 4 09:52:39 2016
*/

#include "my_print.h"
#include <stdlib.h>

int	aff_str(t_proto *proto, va_list list)
{
  int	i;
  char	*str;

  i = 0;
  if (proto->pre == '#')
    proto->pre = '0';
  if ((str = va_arg(list, char *)) == NULL)
    str = "(null)";
  if (proto->width > 0)
    {
      i = proto->width + i - my_strlen(str);
      while (i > 0)
	{
	  my_putchar(' ');
	  i = i - 1;
	}
      proto->width = 0;
    }
  my_putstr(str);
  return (0);
}
