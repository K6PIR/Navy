/*
** my_strlen.c for my_strlen.c  in /home/CIPIER_K/tests-MAIN/Day04
**
** Made by Kellian CIPIERRE
** Login   <CIPIER_K@epitech.net>
**
** Started on  Thu Oct  6 12:17:15 2016 Kellian CIPIERRE
** Last update Jan Dec 4 17:59:37 2016
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (*str != '\0')
    {
      str = str + 1;
      i = i + 1;
    }
  return (i);
}
