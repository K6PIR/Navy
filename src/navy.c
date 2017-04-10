/*
** navy.c for NAVY in /home/invicta/PSU_2016_navy/src/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Thu Feb  2 12:02:59 2017 Kellian CIPIERRE
** Last update Feb Feb 6 23:49:48 2017
*/

#include "my.h"
#include "get_next_line.h"

int	navy(int enemy_pid, int status, t_struct *maps)
{
  int	i;
  int	j;

  i = 0;
  init_sigaction_communication();
  while ((j = game_over(maps, i)) == 2)
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
      i++;
      if (i % 2 == 0)
	print_map(maps);
    }
  return (j);
}
