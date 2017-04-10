/*
** my_show_wordtab.c for my_show_wordtab in /home/sachs_a/delivery/CPool_Day08/task03
**
** Made by Alexandre Sachs
** Login   <sachs_a@epitech.net>
**
** Started on  Wed Oct 12 09:23:05 2016 Alexandre Sachs
** Last update Jun Feb 3 13:04:06 2017
*/

#include "my.h"

int	show_map(char **tab)
{
  int	i;
  int	j;

  i = 0;
  my_printf(" |A B C D E F G H\n-+---------------\n");
  while (i <= 7)
    {
      j = 0;
      my_printf("%d|", i + 1);
      while (j <= 7)
	{
	  my_printf("%c", tab[i][j]);
	  if (j != 7)
	    my_printf(" ");
	  j++;
	}
      my_printf("\n");
      i++;
    }
  return (0);
}

int	print_map(t_struct *maps)
{
  my_printf("\nmy positions:\n");
  show_map(maps->tab);
  my_printf("\nenemy's positions:\n");
  show_map(maps->tab_enemy);
  return (0);
}
