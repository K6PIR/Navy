/*
** my_put_nbr.c for  in /home/CIPIER_K/MAIN_dir
**
** Made by Kellian CIPIERRE
** Login   <CIPIER_K@epitech.net>
**
** Started on  Wed Oct  5 22:39:04 2016 Kellian CIPIERRE
** Last update Jan Dec 4 00:20:45 2016
*/

#include "my_print.h"

int	too_much(int nb)
{
  nb = nb / 10;
  if (nb < 0)
    {
      nb = nb * -1;
      my_putchar(45);
    }
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
    }
  my_putchar((nb % 10) + 48);
  return (0);
}

int	my_put_nbr(int nb)
{
  if (nb == -2147483648)
    {
      too_much(nb);
      my_putchar(56);
      return (0);
    }
  if (nb < 0)
    {
      nb  = nb * -1;
      my_putchar(45);
    }
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
    }
  my_putchar((nb % 10) + 48);
  return (0);
}
