/*
** fn_ptr_tab.c for Printf in /home/invicta/PSU_2016_my_printf/srcs/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Thu Nov 10 23:33:07 2016 Kellian CIPIERRE
** Last update Jan Dec 4 00:21:49 2016
*/

#include "my_print.h"
#include <stdarg.h>

void	init_fnptr_tab(t_fnptr *fnptr_tab)
{
  fnptr_tab[0].flag = 'd';
  fnptr_tab[0].p = &aff_nbr10;
  fnptr_tab[1].flag = 'i';
  fnptr_tab[1].p = &aff_nbr10;
  fnptr_tab[2].flag = 'u';
  fnptr_tab[2].p = &aff_unsigned;
  fnptr_tab[3].flag = 'b';
  fnptr_tab[3].p = &aff_nbr2;
  fnptr_tab[4].flag = 'o';
  fnptr_tab[4].p = &aff_nbr8;
  fnptr_tab[5].flag = 'x';
  fnptr_tab[5].p = &aff_nbr16x;
  fnptr_tab[6].flag = 'X';
  fnptr_tab[6].p = &aff_nbr16X;
  fnptr_tab[7].flag = 'c';
  fnptr_tab[7].p = &aff_char;
  fnptr_tab[8].flag = 's';
  fnptr_tab[8].p = &aff_str;
  fnptr_tab[9].flag = 'S';
  fnptr_tab[9].p = &aff_str_octal;
  fnptr_tab[10].flag = 'p';
  fnptr_tab[10].p = &aff_pointer;
}
