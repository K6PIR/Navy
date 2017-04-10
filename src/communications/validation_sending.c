/*
** validation_sending.c for validation_sending in /home/sachs_a/delivery/system_unix/PSU_2016_navy
**
** Made by Alexandre Sachs
** Login   <sachs_a@epitech.net>
**
** Started on  Mon Feb  6 22:48:39 2017 Alexandre Sachs
** Last update Feb Feb 6 23:10:17 2017
*/

#include "my.h"

int	validation_sending(int pid, int sig)
{
  int	i;

  i = 0;
  while (i++ < 8)
    {
      kill(pid, sig);
      usleep(500);
    }
  return (0);
}
