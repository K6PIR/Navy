/*
** my_strcmp.c for  in /home/CIPIER_K/CPool_Day06
**
** Made by Kellian CIPIERRE
** Login   <CIPIER_K@epitech.net>
**
** Started on  Mon Oct 10 23:18:05 2016 Kellian CIPIERRE
** Last update May Dec 1 18:20:07 2016
*/

int	my_strcmp(char *s1, char *s2)
{
  int	total;

  total = 0;
  while (*s1 != '\0')
    {
      total = *s1 - *s2;
      if (total < 0)
	return (-1);
      else if (total > 0)
	return (1);
      s1 = s1 + 1;
      s2 = s2 + 1;
    }
  return (0);
}
