/*
** my_putnbr8.c for Printf in /home/invicta/PSU_2016_my_printf/srcs/aff_fn/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Fri Nov 11 22:29:18 2016 Kellian CIPIERRE
** Last update Jan Dec 4 00:21:08 2016
*/

#include "my_print.h"

int		my_putnbr_base(unsigned int nb, int base)
{
  unsigned int	num;
  char		*base_str;

  base_str = "0123456789ABCDEF";
  num = nb % base;
  nb = nb / base;
  if (nb > 0)
    my_putnbr_base(nb, base);
  my_putchar(base_str[num]);
  return (0);
}
