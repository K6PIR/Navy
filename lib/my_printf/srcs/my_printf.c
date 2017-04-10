/*
** my_printf.c for Printf in /home/invicta/PSU_2016_my_printf/srcs/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Fri Nov 11 12:26:59 2016 Kellian CIPIERRE
** Last update Jan Dec 4 00:22:00 2016
*/

#include <stdio.h>
#include <unistd.h>
#include "my_print.h"

int		checking_flag(t_proto *proto, char *str, va_list list)
{
  t_fnptr	fnptr_tab[11];
  int	i;
  int	j;

  i = 0;
  j = 0;
  init_fnptr_tab(fnptr_tab);
  while (j <= 20 && str[i])
    {
      if (j < 11 && str[i] == fnptr_tab[j].flag)
	{
	  fnptr_tab[j].p(proto, list);
	  return (0);
	}
      j = j + 1;
    }
   if (str[i] != '%')
    {
      my_putchar('%');
      return (1);
    }
  else if (str[i] == '%')
    my_putchar('%');
  return (0);
}

int		my_get_int(char *str)
{
  int		i;
  int		result;

  i = 0;
  result = 0;
  while (str[i] >= '0' && str[i] <= '9')
    {
      result = result + str[i] - '0';
      result = result * 10;
      i = i + 1;
    }
  return (result / 10);
}

int		print_str(char *str, int i)
{
  int		j;

  j = 0;
  while (j <= i)
    {
      my_putchar(str[j]);
      j = j + 1;
    }
  return (0);
}

char		*checking_proto(char *str, va_list list)
{
  t_proto	precede;
  t_proto	*proto;
  int		i;

  i = 0;
  proto = &precede;
  precede.pre = '0';
  precede.width = 0;
  if (str[i] == '#')
    {
      precede.pre = '#';
      i = i + 1;
    }
  if (str[i] >= '0' && str[i] <= '9')
    {
      proto->width = my_get_int(str + i);
      while ((str[i] >= '0' && str[i] <= '9'))
	  i = i + 1;
    }
  str = str + i;
  if ((checking_flag(proto, str, list)) == 1)
    print_str(str, i);
  return (str);
}

int		my_printf(char *str, ...)
{
  va_list	list;

  va_start(list, str);
  while (*str != '\0')
    {
      if (*str == '%')
	{
	  str = str + 1;
	  str = checking_proto(str, list);
	}
      else
	my_putchar(*str);
      str = str + 1;
    }
  va_end(list);
  return (0);
}
