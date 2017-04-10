/*
** my_put_pointer.c for Printf in /home/invicta/PSU_2016_my_printf/srcs/aff_fn/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Mon Nov 14 21:49:14 2016 Kellian CIPIERRE
** Last update Jan Dec 4 00:20:54 2016
*/

#include "my_print.h"

int		my_putnbr16xl(unsigned long nb)
{
  unsigned long	num;
  char		*base_str;

  base_str = "0123456789abcdef";
  num = nb % 16;
  nb = nb / 16;
  if (nb > 0)
    my_putnbr16xl(nb);
  my_putchar(base_str[num]);
  return (0);
}

int		my_put_pointer(unsigned long pointer)
{
  my_putstr("0x");
  my_putnbr16xl(pointer);
  return (0);
}
