/*
** binary_sending.c for binary_sending in /home/sachs_a/delivery/system_unix/PSU_2016_navy/src/communications
**
** Made by Alexandre Sachs
** Login   <sachs_a@epitech.net>
**
** Started on  Mon Feb  6 22:45:58 2017 Alexandre Sachs
** Last update Feb Feb 6 23:27:30 2017
*/

#include "my.h"

int	binary_transmitter(pid_t pid, int binary)
{
  int	nbr;
  int	i;

  i = 0;
  while (i <= 2)
    {
      nbr = binary % 10;
      if (nbr == 0)
	kill(pid, SIGUSR1);
      else
	kill(pid, SIGUSR2);
      usleep(500);
      binary /= 10;
      i++;
    }
  return (0);
}
