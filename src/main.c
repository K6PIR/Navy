/*
** main.c for main in /home/sachs_a/delivery/system_unix/PSU_2016_navy/src
**
** Made by Alexandre Sachs
** Login   <sachs_a@epitech.net>
**
** Started on  Mon Jan 30 11:19:02 2017 Alexandre Sachs
** Last update Fri Feb 17 10:06:55 2017 Alexandre Sachs
*/

#include "my.h"

int		errors(int ac)
{
  if (ac != 2 && ac != 3)
    return (84);
  return (0);
}

int		main(int argc, char **argv)
{
  t_struct	*maps;
  pid_t		enemy_pid;
  int		status;
  int		finish;

  if (errors(argc) == 84)
    return (84);
  if (my_strcmp(argv[1], "-h") == 0)
    {
      my_printf("USAGE\n\t./navy [first_player_pid] navy_positions\n\n");
      my_printf("DESCRIPTION\n\tfirst_player_pid\tonly for the 2nd player.\
 pid of the first player.\n\tnavy_positions\t\tfile representing\
 the positions of the ships.\n");
      return (0);
    }
  my_printf("my_pid:\t%d\n", getpid());
  if ((maps = my_parse_fill(argc, argv)) == NULL)
    return (84);
  enemy_pid = connexion(argc, argv);
  status = argc % 2;
  print_map(maps);
  finish = navy(enemy_pid, status, maps);
  return (finish);
}
