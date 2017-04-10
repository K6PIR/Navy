/*
** get_next_line.c for Get_Next_Line in /home/invicta/CPE_2016_getnextline/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Tue Jan  3 09:13:13 2017 Kellian CIPIERRE
** Last update Sat Feb  4 13:43:34 2017 Alexandre Sachs
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

char	*my_realloc(char *ori, int x)
{
  char	*dest;
  int	i;

  i = 0;
  if ((dest = malloc(sizeof(*dest) * (x + 1))) == NULL)
    return (NULL);
  while (ori[i] != '\0')
    {
      dest[i] = ori[i];
      i++;
    }
  while (i < x)
    dest[i++] = '\0';
  free(ori);
  return (dest);
}

char		*drain_buff(t_gnl *stat, int *j)
{
  char		*str;

  if ((str = malloc(sizeof(*str) *
		    ((2 * READ_SIZE) - (stat->pos - 1)))) == NULL)
    return (NULL);
  while (stat->pos < stat->size)
    {
      str[*j] = stat->buff[stat->pos++];
      if (str[*j] == '\n')
	{
	  str[*j] = '\0';
	  stat->pos %= READ_SIZE;
	  return (str);
	}
      else if (str[*j] == '\0')
	{
	  stat->pos %= READ_SIZE;
	  return (str);
	}
        *j += 1;
    }
  return (str);
}

char		*filling_str(int fd, t_gnl *stat, char *str, int *j)
{
  while ((stat->size = read(fd, stat->buff, READ_SIZE)) > 0)
    {
      stat->pos = 0;
      while (stat->buff[stat->pos] && stat->buff[stat->pos] != '\n')
	{
	  str[*j] = stat->buff[stat->pos++];
	  *j += 1;
	}
      if (stat->pos < READ_SIZE)
	{
	  stat->pos++;
	  str[*j] = '\0';
	  stat->pos %= READ_SIZE;
	  return (str);
	}
      else
	{
	  str[*j] = '\0';
	  if ((str = my_realloc(str, READ_SIZE + *j + 2)) == NULL)
	    return (NULL);
	}
    }
  return (str);
}

char			*get_next_line(const int fd)
{
  static t_gnl		stat = {0, {0}, 0};
  char			*str;
  int			j;

  j = 0;
  if (stat.pos != 0)
    {
      if ((str = drain_buff(&stat, &j)) == NULL)
	return (NULL);
      if (stat.pos < stat.size)
	return (str);
    }
  else
    {
      if ((str = malloc(sizeof(*str) * (READ_SIZE + 2))) == NULL)
	return (NULL);
    }
  if ((str = filling_str(fd, &stat, str, &j)) == NULL)
    return (NULL);
  if (stat.size > 0 || j > 0)
    return (str);
  return (NULL);
}
