/*
** my_intlen.c for Printf in /home/invicta/PSU_2016_my_printf/srcs/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Fri Nov 18 11:08:43 2016 Kellian CIPIERRE
** Last update Jan Nov 20 13:48:58 2016
*/

int	my_intlen_base(unsigned int result, int base)
{
  int	i;

  i = 0;
  if (result == 0)
    return (1);
  while (result != 0)
    {
      result = result / base;
      i = i + 1;
    }
  return (i);
}
