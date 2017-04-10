/*
** defense.c for NAVY in /home/invicta/PSU_2016_navy/src/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Sat Feb  4 10:37:30 2017 Kellian CIPIERRE
** Last update Fri Feb 17 09:53:24 2017 Alexandre Sachs
*/

#include "my.h"

int		sos(int pos, int enemy_pid)
{
  binary_reception(2);
  while (target_reception(pos) != 3)
    {
      binary_reception(2);
      validation_sending(enemy_pid, SIGUSR1);
    }
  pos = binary_to_decimal(binary_reception(2));
  validation_sending(enemy_pid, SIGUSR2);
  return (pos);
}

int		defense(int enemy_pid, t_struct *maps)
{
  t_position	position;

  my_printf("\nwaiting for enemy's attack...\n");
  position.col = sos(position.col, enemy_pid);
  position.line = sos(position.line, enemy_pid);
  my_printf("%c%c: ", position.col + 65, position.line + 49);
  usleep(10000);
  if (hit_or_miss(position, maps->tab) == 0)
    {
      validation_sending(enemy_pid, SIGUSR1);
      my_printf("missed\n");
    }
  else
    {
      validation_sending(enemy_pid, SIGUSR2);
      my_printf("hit\n");
    }
  return (0);
}
