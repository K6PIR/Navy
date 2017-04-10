/*
** position_verification.c for NAVY in /home/invicta/PSU_2016_navy/src/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Sat Feb  4 10:46:15 2017 Kellian CIPIERRE
** Last update Jun Feb 17 09:23:40 2017
*/

#include "my.h"

int	verif_position(char *position)
{
  if (my_strlen(position) != 2)
    {
      my_printf("wrong position\nattack:\t");
      return (0);
    }
  if (((position[0] >= 'A' && position[0] <= 'H') ||
       (position[0] >= 'a' && position[0] <= 'h')) &&
      (position[1] >= '1' && position[1] <= '8'))
    return (1);
  else if ((position[0] >= '1' && position[0] <= '8') &&
	   ((position[1] >= 'A' && position[1] <= 'H') ||
	    (position[1] >= 'a' && position[1] <= 'h')))
    return (1);
  my_printf("wrong position\nattack:\t");
  return (0);
}

char	*optimize_position(char *str)
{
  if (str[0] >= '1' && str[0] <= '8')
    my_swap(&(str[0]), &(str[1]));
  if (str[0] >= 'a' && str[0] <= 'h')
    str[0] -= 32;
  return (str);
}
