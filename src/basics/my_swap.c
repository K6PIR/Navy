/*
** my_swap.c for  in /home/CIPIER_K/tests-MAIN/Day04
**
** Made by Kellian CIPIERRE
** Login   <CIPIER_K@epitech.net>
**
** Started on  Thu Oct  6 10:39:09 2016 Kellian CIPIERRE
** Last update Jun Feb 10 10:46:29 2017
*/

int	my_swap(char *a, char *b)
{
  int	t;

  t = *b;
  *b = *a;
  *a = t;
  return (0);
}
