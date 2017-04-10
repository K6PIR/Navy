/*
** update.c for NAVY in /home/invicta/PSU_2016_navy/src/maps/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Thu Feb  2 17:25:10 2017 Kellian CIPIERRE
** Last update Jun Feb 3 10:33:09 2017
*/

#include "my.h"

int	update_map(char **map, t_position position, int touch)
{
  if (touch == 0)
    map[position.line][position.col] = 'o';
  else
    map[position.line][position.col] = 'x';
  return (0);
}
