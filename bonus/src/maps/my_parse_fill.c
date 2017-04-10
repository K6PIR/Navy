/*
** my_parse_fill.c for my_parse_fill in /home/sachs_a/delivery/system_unix/PSU_2016_navy/src
**
** Made by Alexandre Sachs
** Login   <sachs_a@epitech.net>
**
** Started on  Wed Feb  1 10:04:06 2017 Alexandre Sachs
** Last update Fri Feb 10 12:46:02 2017 Alexandre Sachs
*/

#include "my.h"
#include "get_next_line.h"

int		which_boat(t_struct *map, int i)
{
  char		**tab_pos;

  tab_pos = my_str_to_wordtab(map->file[i], ':');
  if (tablen(tab_pos) != 3)
    return (84);
  if (tab_pos[0][0] < '2' || tab_pos[0][0] > '5')
    return (84);
  if (((tab_pos[1][0] == tab_pos[2][0]) && (tab_pos[1][1] != tab_pos[2][1])) ||
      ((tab_pos[1][1] == tab_pos[2][1]) && (tab_pos[1][0] != tab_pos[2][0])))
    {
      if (fill_my_boat(map, tab_pos) == 84)
	return (84);
    }
  else
    return (84);
  return (0);
}

int		my_malloc_fill(t_struct *map)
{
  int		i;
  int		j;

  i = -1;
  if ((map->tab = malloc(sizeof(char *) * 8)) == NULL)
    return (84);
  while (++i < 8)
    {
      if ((map->tab[i] = malloc(sizeof(char) * 8)) == NULL)
	return (84);
    }
  i = -1;
  while (++i < 8)
    {
      j = -1;
      while (++j < 8)
	map->tab[i][j] = '.';
    }
  return (0);
}

int		my_malloc_fill_enemy(t_struct *map)
{
  int		i;
  int		j;

  i = -1;
  if ((map->tab_enemy = malloc(sizeof(char *) * 8)) == NULL)
    return (84);
  while (++i < 8)
    {
      if ((map->tab_enemy[i] = malloc(sizeof(char) * 8)) == NULL)
	return (84);
    }
  i = -1;
  while (++i < 8)
    {
      j = -1;
      while (++j < 8)
	map->tab_enemy[i][j] = '.';
    }
  return (0);
}

t_struct	*my_parse_fill(UNUSED int argc, char **argv)
{
  t_struct	*map;
  int		i;

  map = malloc(sizeof(t_struct));
  map->file = malloc(sizeof(char *) * 5);
  if ((my_malloc_fill(map) == 84) || (my_malloc_fill_enemy(map) == 84))
    return (NULL);
  if ((map->fd = open(argv[argc - 1], O_RDONLY)) < 0)
    {
      my_printf("Trying to open something that doesn't exist.\n");
      return (NULL);
    }
  i = -1;
  while (++i <= 3)
    {
      map->file[i] = get_next_line(map->fd);
      if (which_boat(map, i) == 84)
     	return (NULL);
    }
  if (get_next_line(map->fd))
    return (NULL);
  if (check_size(map->file) == 84)
    return (NULL);
  return (map);
}
