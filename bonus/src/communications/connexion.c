/*
** pid_reception.c for NAVY in /home/invicta/test/function_test/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Wed Feb  1 14:47:09 2017 Kellian CIPIERRE
** Last update Thu Feb 16 21:52:51 2017 Alexandre Sachs
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

int		player1_connexion(WINDOW *wlist)
{
  int		i;

  i = 0;
  mvprintw((LINES / 2 + 2), (COLS / 2) - 31/2,
	   "waiting for enemy connexion...");
  refresh();
  while (usleep(10000000) == 0);
  while (usleep(100) != 0);
  while (i++ < 4)
    kill(pid_reception(0), SIGUSR1);
  clear();
  refresh();
  wlist = newwin(10, 40, LINES / 2 - 5,COLS / 2 - 20);
  mvprintw(LINES / 2, COLS / 2 - 8, "enemy connected!");
  box(wlist, 0, 0);
  wrefresh(wlist);
  refresh();
  usleep(1500000);
  clear();
  refresh();
  return (pid_reception(0));
}

pid_t		connexion(int ac, char **av, WINDOW *wlist)
{
  int		i;

  i = 0;
  if (init_sigaction_connexion() == 84)
    return (84);
  if (ac == 2)
    {
      i = player1_connexion(wlist);
      return (i);
    }
  while (i++ < 4)
    {
      kill(my_getnbr(av[1]), SIGUSR1);
      usleep(2);
    }
  while (usleep(10000) == 0);
  while (usleep(100) != 0);
  mvprintw((LINES / 2 + 2), (COLS / 2) - 23 / 2, "successfully connected");
  refresh();
  usleep(1500000);
  clear();
  refresh();
  return (my_getnbr(av[1]));
}
