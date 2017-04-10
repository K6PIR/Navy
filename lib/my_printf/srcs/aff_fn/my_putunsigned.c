/*
** my_putunsigned.c for Printf in /home/invicta/PSU_2016_my_printf/srcs/aff_fn/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Mon Nov 14 19:05:17 2016 Kellian CIPIERRE
** Last update Jan Dec 4 00:21:32 2016
*/

#include <stdio.h>
#include <my_print.h>

int		my_putunsigned(unsigned result)
{
  unsigned int	num;

  num = result % 10;
  result = result / 10;
  if (result > 0)
    my_putunsigned(result);
  my_putchar(num + '0');
  return (0);
}

int		my_unsigned(int nb)
{
  unsigned int	result;

  if (nb < 0)
    result = 4294967295 + nb + 1;
  else
    result = nb;
  my_putunsigned(result);
  return (0);
}
