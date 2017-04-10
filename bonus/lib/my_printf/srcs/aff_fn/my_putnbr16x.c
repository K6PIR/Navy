/*
** my_putnbr16x.c for Printf in /home/invicta/PSU_2016_my_printf/srcs/aff_fn/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Fri Nov 11 22:29:01 2016 Kellian CIPIERRE
** Last update Jan Dec 4 00:21:15 2016
*/

#include "my_print.h"

int		my_putnbr16x(unsigned int nb)
{
  unsigned int	num;
  char		*base_str;

  base_str = "0123456789abcdef";
  num = nb % 16;
  nb = nb / 16;
  if (nb > 0)
    my_putnbr16x(nb);
  my_putchar(base_str[num]);
  return (0);
}
