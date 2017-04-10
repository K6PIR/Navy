/*
** init_sigation.c for NAVY in /home/invicta/PSU_2016_navy/src/communications/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Thu Feb  2 14:14:27 2017 Kellian CIPIERRE
** Last update Feb Feb 6 22:47:44 2017
*/

#include "my.h"

void	handler_connexion(UNUSED int sig, siginfo_t *siginfo, UNUSED void *uap)
{
  pid_reception(siginfo->si_pid);
}

void	handler_communication(int sig)
{
  if (sig == SIGUSR1)
    binary_reception(0);
  else if (sig == SIGUSR2)
    binary_reception(1);
}

int	init_sigaction_connexion()
{
  struct sigaction act;

  sigemptyset(&act.sa_mask);
  act.sa_flags = SA_SIGINFO;
  act.sa_sigaction = &handler_connexion;
  if (sigaction(SIGUSR1, &act, NULL) < 0)
    return (84);
  return (0);
}

int	init_sigaction_communication()
{
  struct sigaction act;

  sigemptyset(&act.sa_mask);
  act.sa_flags = SA_RESTART;
  act.sa_handler = &handler_communication;
  if (sigaction(SIGUSR1, &act, NULL) < 0)
    return (84);
  if (sigaction(SIGUSR2, &act, NULL) < 0)
    return (84);
  return (0);
}
