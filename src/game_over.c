/*
** game_over.c for game_over in /home/sachs_a/delivery/system_unix/PSU_2016_navy/src
**
** Made by Alexandre Sachs
** Login   <sachs_a@epitech.net>
**
** Started on  Thu Feb  2 17:19:55 2017 Alexandre Sachs
** Last update Feb Feb 6 23:51:32 2017
*/

#include "my.h"

int	check_boats(char **map)
{
  int	i;
  int	j;
  int	hit;

  hit = 0;
  i = 0;
  while (i <= 7)
    {
      j = 0;
      while (j <= 7)
	{
	  if (map[i][j] == 'x')
	    hit++;
	  j++;
	}
      i++;
    }
  if (hit == 14)
    return (0);
  return (1);
}

int	game_over(t_struct *maps, int i)
{
  if (check_boats(maps->tab_enemy) == 0)
    {
      if (i % 2 == 1)
	print_map(maps);
      my_printf("\nI won\n");
      return (0);
    }
  else if (check_boats(maps->tab) == 0)
    {
      if (i % 2 == 1)
	print_map(maps);
      my_printf("\nEnemy won\n");
      return (1);
    }
  return (2);
}
