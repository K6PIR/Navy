/*
** show_stats.c for NAVY in /home/invicta/PSU_2016_navy/bonus/src/maps/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Wed Feb 15 21:42:38 2017 Kellian CIPIERRE
** Last update Thu Feb 16 23:26:44 2017 Alexandre Sachs
*/

#include "my.h"

int		find_blocks(char **map)
{
  int		i;
  int		j;
  int		blocks;

  blocks = 0;
  i = 0;
  while (i < 8)
    {
      j = 0;
      while (j < 8)
	{
	  if (map[i][j] >= '2' && map[i][j] <= '5')
	    blocks++;
	  j++;
	}
      i++;
    }
  return (blocks);
}

int		show_stats(t_struct *maps, int status)
{
  int		blocks;
  WINDOW	*wlist;

  mvprintw(LINES / 2 - 14, COLS / 2 + 10, "STATISTICS");
  wlist = newwin(9, 30, LINES / 2 - 13, COLS / 2);
  mvprintw(LINES / 2 - 11, COLS / 2 + 3, "Turn : %d", status / 2 + status % 2);
  blocks = find_blocks(maps->tab);
  mvprintw(LINES / 2 - 9, COLS / 2 + 3, "Block(s) left : %d", blocks);
  blocks = find_blocks(maps->tab_enemy);
  mvprintw(LINES / 2 - 7, COLS / 2 + 3, "Enemy block(s) left : %d",
	   14 - blocks);
  box(wlist, 0, 0);
  wrefresh(wlist);
  return (0);
}
