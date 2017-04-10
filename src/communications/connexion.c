/*
** pid_reception.c for NAVY in /home/invicta/test/function_test/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Wed Feb  1 14:47:09 2017 Kellian CIPIERRE
** Last update Sat Feb  4 13:42:40 2017 Alexandre Sachs
*/

#include "my.h"

pid_t		pid_reception(pid_t pid)
{
  static pid_t	save = 0;
  pid_t		result;

  result = 0;
  if (pid == 0)
    {
      result = save;
      return (result);
    }
  save = pid;
  return (result);
}

pid_t		connexion(int ac, char **av)
{
  int		i;

  i = 0;
  if (init_sigaction_connexion() == 84)
    return (84);
  if (ac == 2)
    {
      my_printf("waiting for enemy connexion...\n");
      while (usleep(10000000) == 0);
      while (usleep(100) != 0);
      while (i++ < 4)
	kill(pid_reception(0), SIGUSR1);
      my_printf("enemy connected\n");
      return (pid_reception(0));
    }
  while (i++ < 4)
    {
      kill(my_getnbr(av[1]), SIGUSR1);
      usleep(2);
    }
  while (usleep(10000) == 0);
  while (usleep(100) != 0);
  my_printf("successfully connected\n");
  return (my_getnbr(av[1]));
}
