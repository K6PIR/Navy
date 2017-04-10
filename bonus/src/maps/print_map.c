/*
** my_show_wordtab.c for my_show_wordtab in /home/sachs_a/delivery/CPool_Day08/task03
**
** Made by Alexandre Sachs
** Login   <sachs_a@epitech.net>
**
** Started on  Wed Oct 12 09:23:05 2016 Alexandre Sachs
** Last update Thu Feb 16 22:27:57 2017 Alexandre Sachs
*/

#include "my.h"

int		print_position(char position)
{
  if (position == 'x')
    {
      attron(COLOR_PAIR(1));
      printw("%c", position);
      attroff(COLOR_PAIR(1));
    }
  else if (position == 'o')
    {
      attron(COLOR_PAIR(2));
      printw("%c", position);
      attroff(COLOR_PAIR(2));
    }
  else
    printw("%c", position);
  return (0);
}

int		show_map(char **tab, int high)
{
  int		i;
  int		j;

  i = 0;
  mvprintw(LINES / 2 - 11 + high, 5, " |A B C D E F G H");
  mvprintw(LINES / 2 - 10 + high, 5, "-+---------------");
  while (i <= 7)
    {
      move(LINES / 2 + i - 9 + high, 5);
      j = 0;
      printw("%d|", i + 1);
      while (j <= 7)
	{
	  print_position(tab[i][j]);
	  if (j != 7)
	    printw(" ");
	  j++;
	}
      i++;
    }
  return (0);
}

int		print_map(t_struct *maps, int status)
{
  WINDOW	*wlist;

  resize_window();
  wlist = newwin(14, 23, LINES / 2 - 13, 2);
  wbkgd(wlist, COLOR_PAIR(2));
  attron(COLOR_PAIR(2));
  mvprintw(LINES / 2 - 14, 8, "ALLY'S MAP");
  attroff(COLOR_PAIR(2));
  refresh();
  box(wlist, 0, 0);
  wrefresh(wlist);
  show_map(maps->tab, 0);
  wlist = newwin(14, 23, LINES / 2 + 3, 2);
  wbkgd(wlist, COLOR_PAIR(1));
  attron(COLOR_PAIR(1));
  mvprintw(LINES / 2 + 2, 8, "ENEMY'S MAP");
  attroff(COLOR_PAIR(1));
  refresh();
  box(wlist, 0, 0);
  wrefresh(wlist);
  show_map(maps->tab_enemy, 16);
  show_stats(maps, status);
  return (0);
}
