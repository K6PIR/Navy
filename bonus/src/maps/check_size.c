/*
** check_size.c for NAVY in /home/invicta/PSU_2016_navy/src/maps/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Fri Feb 10 11:16:22 2017 Kellian CIPIERRE
** Last update Jun Feb 10 11:25:53 2017
*/

int	check_size(char **file)
{
  int	i;
  int	j;

  i = 0;
  while (i < 3)
    {
      j = i + 1;
      while (j <= 3)
	{
	  if (file[j][0] == file[i][0])
	    return (84);
	  j++;
	}
      i++;
    }
  return (0);
}
