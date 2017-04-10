/*
** game_over.c for game_over in /home/sachs_a/delivery/system_unix/PSU_2016_navy/src
**
** Made by Alexandre Sachs
** Login   <sachs_a@epitech.net>
**
** Started on  Thu Feb  2 17:19:55 2017 Alexandre Sachs
** Last update Apr Feb 8 22:30:06 2017
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

int	game_over(t_struct *maps)
{
  if (check_boats(maps->tab_enemy) == 0)
    {
      clear();
      mvprintw((LINES / 2), (COLS / 2) - 5 / 2, "I won");
      refresh();
      sleep(3);
      return (0);
    }
  else if (check_boats(maps->tab) == 0)
    {
      clear();
      mvprintw((LINES / 2), (COLS / 2) - 9 / 2, "Enemy won");
      refresh();
      sleep(3);
      return (1);
    }
  return (2);
}
