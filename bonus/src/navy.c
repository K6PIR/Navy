/*
** navy.c for NAVY in /home/invicta/PSU_2016_navy/src/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Thu Feb  2 12:02:59 2017 Kellian CIPIERRE
** Last update Apr Feb 15 22:04:56 2017
*/

#include "my.h"
#include "get_next_line.h"

int	navy(int enemy_pid, int status, t_struct *maps)
{
  int	j;
  int	turn;

  turn = 1;
  init_sigaction_communication();
  while ((j = game_over(maps)) == 2)
    {
      if (status == 0)
	{
	  if (attack(enemy_pid, maps) == 84)
	    return (84);
	  status += 1;
	}
      else
	{
	  defense(enemy_pid, maps);
	  status -= 1;
	}
      turn++;
      resize_window();
      clear();
      print_map(maps, turn);
      refresh();
    }
  return (j);
}
