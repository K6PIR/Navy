/*
** resize_window.c for NAVY in /home/invicta/PSU_2016_navy/bonus/src/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Wed Feb 15 21:06:47 2017 Kellian CIPIERRE
** Last update Thu Feb 16 23:11:12 2017 Alexandre Sachs
*/

#include "my.h"

int	window_checker()
{
  int	windowx;
  int	windowy;

  getmaxyx(stdscr, windowx, windowy);
  if (windowx < 31 || windowy < 74)
    return (84);
  return (0);
}

int	resize_window()
{
  char	*error;

  error = "Invalid window : enlarge the terminal please";
  if (window_checker() == 84)
    {
      clear();
      move(LINES / 2, (COLS / 2) - (my_strlen(error) / 2));
      printw(error);
      refresh();
      while (window_checker() == 84)
	{
	  getch();
	  clear();
	  move(LINES / 2, (COLS / 2) - (my_strlen(error) / 2));
	  printw(error);
	  refresh();
	}
      clear();
    }
  return (0);
}
