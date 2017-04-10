/*
** target_reception.c for NAVY in /home/invicta/PSU_2016_navy/src/communications/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Sat Feb  4 11:50:12 2017 Kellian CIPIERRE
** Last update Feb Feb 6 23:27:54 2017
*/

#include "my.h"

int	target_reception()
{
  int	i;

  i = 0;
  while (usleep(100) == 0);
  i++;
  while (usleep(2000) != 0)
    i++;
  return (i);
}
