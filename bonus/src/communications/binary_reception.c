/*
** binary_reception.c for NAVY in /home/invicta/test/function_test/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Tue Jan 31 08:17:14 2017 Kellian CIPIERRE
** Last update Mar Jan 31 08:31:06 2017
*/

#include <stdio.h>
int	power(int nb, int p);

int		binary_reception(int input)
{
  int		result;
  static int	binary = 0;
  static int	state = 0;

  if (input != 0 && input != 1)
    {
      result = binary;
      state = 0;
      binary = 0;
      return (result);
    }
  binary = binary + input * power(10, state);
  state += 1;
  return (0);
}
