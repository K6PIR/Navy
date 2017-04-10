/*
** aff_nbr10.c for Printf in /home/invicta/PSU_2016_my_printf/srcs/va_list_fn/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Fri Nov 11 11:32:32 2016 Kellian CIPIERRE
** Last update Jan Dec 4 09:53:14 2016
*/

#include "my_print.h"

int	my_intlen(int result, int base)
{
  int	i;

  i = 0;
  if (result <= 0)
    i = i + 1;
  while (result != 0)
    {
      result = result / base;
      i = i + 1;
    }
  return (i);
}

int	aff_nbr10(t_proto *proto, va_list list)
{
  int	i;
  int	result;

  i = 0;
  if (proto->pre != '0')
    proto->pre = '0';
  result = va_arg(list, int);
  if (proto->width > 0)
    {
      i =proto->width - (my_intlen(result, 10));
      while (i > 0)
	{
	  my_putchar(' ');
	  i = i - 1;
	}
      proto->width = 0;
    }
  my_put_nbr(result);
  return (0);
}
