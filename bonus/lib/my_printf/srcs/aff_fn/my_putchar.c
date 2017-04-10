/*
** my_putchar.c for  in /home/CIPIER_K/CPool_Day07/lib/my
**
** Made by Kellian CIPIERRE
** Login   <CIPIER_K@epitech.net>
**
** Started on  Tue Oct 11 17:47:12 2016 Kellian CIPIERRE
** Last update Jan Dec 4 00:21:01 2016
*/

#include <unistd.h>

int	my_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}
