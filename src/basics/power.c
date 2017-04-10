/*
** power.c for my_fact_rec.c in /home/CIPIER_K/tests-MAIN/Day05
**
** Made by Kellian CIPIERRE
** Login   <CIPIER_K@epitech.net>
**
** Started on  Fri Oct  7 16:28:06 2016 Kellian CIPIERRE
** Last update May Feb 2 08:11:37 2017
*/

int	power(int nb, int p)
{
  int	a;

  if (p < 0)
    return (0);
  else if (p == 0)
    return (1);
  a = nb * power(nb, p - 1);
  return (a);
}
