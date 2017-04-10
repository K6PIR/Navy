/*
** filling_map.c for filling_map in /home/sachs_a/delivery/system_unix/PSU_2016_navy/src
**
** Made by Alexandre Sachs
** Login   <sachs_a@epitech.net>
**
** Started on  Wed Feb  1 19:23:49 2017 Alexandre Sachs
** Last update Mar Feb 7 12:03:37 2017
*/

#include "my.h"
#include "get_next_line.h"

int		filling_cols(t_struct *map, char **tab,
			     int pos_boat_cols)
{
  int		j;

  j = tab[1][1];
  if ((my_strncmp(tab[1] + 1, tab[2] + 1, 1) != (tab[0][0] - 49)) &&
      (my_strncmp(tab[1] + 1, tab[2] + 1, 1) != (tab[0][0] - 49) * -1))
    return (84);
  while (j != tab[2][1])
    {
      if (map->tab[j - 49][pos_boat_cols] != '.')
	return (84);
      map->tab[j - 49][pos_boat_cols] = tab[0][0];
      if (j < tab[2][1])
	j++;
      else if (j > tab[2][1])
	j--;
    }
  map->tab[j - 49][pos_boat_cols] = tab[0][0];
  return (0);
}

int		filling_lines(t_struct *map, char **tab,
			      int pos_boat_lines)
{
  int		j;

  j = tab[1][0];
  if ((my_strncmp(tab[1], tab[2], 1) != (tab[0][0] - 49)) &&
      (my_strncmp(tab[1], tab[2], 1) != (tab[0][0] - 49) * -1))
    return (84);
  while (j != tab[2][0])
    {
      if (map->tab[pos_boat_lines][j - 65] != '.')
	return (84);
      map->tab[pos_boat_lines][j - 65] = tab[0][0];
      if (j < tab[2][0])
	j++;
      else if (j > tab[2][0])
	j--;
    }
  map->tab[pos_boat_lines][j - 65] = tab[0][0];
  return (0);
}

int		fill_my_boat(t_struct *map, char **tab)
{
  int           pos_boat_lines;
  int           pos_boat_cols;

  if (my_verifi(tab) == 84)
    return (84);
  pos_boat_cols = tab[1][0] - 65;
  pos_boat_lines = tab[1][1] - 49;
  if (tab[1][0] == tab[2][0])
    {
      if (filling_cols(map, tab, pos_boat_cols) == 84)
	return (84);
    }
  else if (tab[1][1] == tab[2][1])
    {
      if (filling_lines(map, tab, pos_boat_lines) == 84)
	return (84);
    }
  return (0);
}
