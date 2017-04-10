/*
** decimal_to_binary.c for NAVY in /home/invicta/PSU_2016_navy/src/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Tue Jan 31 11:09:15 2017 Kellian CIPIERRE
** Last update May Feb 2 08:22:10 2017
*/

#include "my.h"

int	decimal_to_binary(int decimal)
{
  int	binary;
  int	number;
  int	i;

  i = 0;
  binary = 0;
  while (decimal > 0)
    {
      number = decimal % 2;
      binary = binary + number * power(10, i);
      decimal = decimal / 2;
      i++;
    }
  return (binary);
}
