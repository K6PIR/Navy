/*
** my_putstr.c for  in /home/CIPIER_K/tests-MAIN/Day04
**
** Made by Kellian CIPIERRE
** Login   <CIPIER_K@epitech.net>
**
** Started on  Thu Oct  6 12:17:15 2016 Kellian CIPIERRE
** Last update Jan Dec 4 00:21:25 2016
*/

#include "my_print.h"

int	my_putstr (char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
  return (0);
}
