/*
** binary_to_decimal.c for test in /home/invicta/test/function_test/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Mon Jan 30 21:22:38 2017 Kellian CIPIERRE
** Last update May Feb 2 08:21:54 2017
*/

#include "my.h"

int	binary_to_decimal(int binary)
{
  int	decimal;
  int	number;
  int	i;

  i = 0;
  decimal = 0;
  while (binary > 0)
    {
      number = binary % 10;
      decimal = decimal + number * power(2, i);
      binary = binary / 10;
      i++;
    }
  return (decimal);
}
