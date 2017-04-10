/*
** my_verif.c for my_verif in /home/sachs_a/delivery/system_unix/PSU_2016_navy/src
** 
** Made by Alexandre Sachs
** Login   <sachs_a@epitech.net>
** 
** Started on  Wed Feb  1 14:51:18 2017 Alexandre Sachs
** Last update Wed Feb  1 17:03:49 2017 Alexandre Sachs
*/

#include "my.h"

int	is_char_navy(char verif)
{
  if (verif < 'A' || verif > 'H')
    return (0);
  return (1);
}

int	is_num_navy(char verif)
{
  if (verif < '1' || verif > '8')
    return (0);
  return (1);
}

int	my_verifi(char **tab_pos)
{
  int	i;

  i = 1;
  while (i <= 2)
    {
      if (is_char_navy(tab_pos[i][0]) == 0)
	return (84);
      if (is_num_navy(tab_pos[i][1]) == 0)
	return (84);
      i++;
    }
  return (0);
}
