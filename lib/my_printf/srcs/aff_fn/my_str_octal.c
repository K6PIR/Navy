/*
** my_str_octal.c for Printf in /home/invicta/PSU_2016_my_printf/srcs/aff_fn/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Mon Nov 14 20:02:29 2016 Kellian CIPIERRE
** Last update Jan Dec 4 00:21:40 2016
*/

#include "my_print.h"

int	my_putoctal(int nb)
{
  my_putchar('\\');
  if (nb <= 7)
    {
      my_putstr("00");
      my_putnbr_base(nb, 8);
    }
  else if (nb < 32)
    {
      my_putchar('0');
      my_putnbr_base(nb, 8);
    }
  else
    my_putnbr_base(nb, 8);
  return (0);
}

int	my_put_str_octal(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 32 || str[i] > 126)
	my_putoctal(str[i]);
      else
	my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}
