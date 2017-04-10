/*
** hit_or_miss.c for NAVY in /home/invicta/PSU_2016_navy/src/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Fri Feb  3 11:03:54 2017 Kellian CIPIERRE
** Last update Jun Feb 3 14:13:54 2017
*/

#include "my.h"

int	hit_or_miss(t_position position, char **map)
{
  if (map[position.line][position.col] == 'o' ||
      map[position.line][position.col] == 'x')
    return (0);
  else if (map[position.line][position.col] == '.')
    {
      update_map(map, position, 0);
      return (0);
    }
  update_map(map, position, 1);
  return (1);
}
