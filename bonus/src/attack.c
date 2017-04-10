/*
** attack.c for NAVY in /home/invicta/PSU_2016_navy/src/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Sat Feb  4 10:39:44 2017 Kellian CIPIERRE
** Last update Thu Feb 16 23:25:32 2017 Alexandre Sachs
*/

#include "my.h"
#include "get_next_line.h"

int		impact(t_struct *maps, t_position position)
{
  int		shoot;

  mvprintw(LINES / 2 + 10, COLS / 2 + 3, "%c%c: ",
	   position.col + 65, position.line + 49);
  while (usleep(20) == 0);
  while (usleep(1000) != 0);
  if ((shoot = binary_reception(2)) == 0)
    {
      update_map(maps->tab_enemy, position, 0);
      mvprintw(LINES / 2 + 10, COLS / 2 + 7, "missed");
    }
  else
    {
      update_map(maps->tab_enemy, position, 1);
      mvprintw(LINES / 2 + 10, COLS / 2 + 7, "hit   ");
    }
  resize_window();
  refresh();
  sleep(2);
  return (0);
}

int		launching(int pos, int enemy_pid)
{
  int		i;
  int		j;

  i = 0;
  while (i == 0)
    {
      j = 0;
      usleep(10000);
      while (j == 0)
	{
	  binary_transmitter(enemy_pid, decimal_to_binary(pos));
	  j = usleep(10000);
	}
      while (usleep(10000) != 0);
      i = binary_reception(2);
    }
  return (0);
}

int		attack(int enemy_pid, t_struct *maps)
{
  char		*str;
  t_position	position;

  mvprintw(LINES / 2 + 10, COLS / 2 + 3, "attack: ");
  refresh();
  if ((str = malloc(4096)) == NULL)
    return (84);
  str[0] = '\0';
  curs_set(1);
  getstr(str);
  while (verif_position(str) == 0)
    getstr(str);
  curs_set(0);
  if (str == NULL)
    return (84);
  str = optimize_position(str);
  position.col = str[0] - 65;
  position.line = str[1] - 49;
  launching(position.col, enemy_pid);
  launching(position.line, enemy_pid);
  impact(maps, position);
  return (0);
}
