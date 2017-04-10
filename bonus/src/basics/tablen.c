/*
** tablen.c for NAVY in /home/invicta/PSU_2016_minishell1/src/basics/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Wed Jan 18 18:49:05 2017 Kellian CIPIERRE
** Last update Jun Feb 10 11:05:12 2017
*/

int	tablen(char **tab)
{
  int	i;

  if (!tab)
    return (-1);
  i = 1;
  while (tab[i])
    i++;
  return (i);
}
