/*
** my_strncmp.c for my_strncmp in /home/sachs_a/delivery/CPool_Day06
** 
** Made by Alexandre Sachs
** Login   <sachs_a@epitech.net>
** 
** Started on  Mon Oct 10 16:13:51 2016 Alexandre Sachs
** Last update Mon Oct 10 17:31:08 2016 Alexandre Sachs
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while ((i < n) && (s1[i] != '\0' || s2[i] != '\0'))
    {
      if (s1[i] < s2[i])
	return (s1[i] - s2[i]);
      if (s1[i] > s2[i])
	return (s1[i] - s2[i]);
      i = i + 1;
    }
  return (0);
}
