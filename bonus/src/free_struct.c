/*
** free_tab.c for NAVY in /home/invicta/PSU_2016_navy/src/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Tue Feb  7 16:09:36 2017 Kellian CIPIERRE
** Last update Mar Feb 7 16:15:45 2017
*/

#include "my.h"

int	free_struct(t_struct *maps)
{
  int	i;

  i = 0;
  while (i < 8)
    {
      free(maps->tab[i]);
      free(maps->tab_enemy[i]);
      i++;
    }
  free(maps->tab);
  free(maps->tab_enemy);
  free(maps->str);
  free(maps);
  return (0);
}
