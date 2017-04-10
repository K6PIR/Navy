/*
** main.c for main in /home/sachs_a/delivery/system_unix/PSU_2016_navy/src
**
** Made by Alexandre Sachs
** Login   <sachs_a@epitech.net>
**
** Started on  Mon Jan 30 11:19:02 2017 Alexandre Sachs
** Last update Fri Feb 17 10:06:33 2017 Alexandre Sachs
*/

#include "my.h"

int		errors(int ac)
{
  if (ac != 2 && ac != 3)
    return (84);
  return (0);
}

void		init_window()
{
  initscr();
  refresh();
  start_color();
  init_pair(1, COLOR_RED, COLOR_BLACK);
  init_pair(2, COLOR_BLUE, COLOR_BLACK);
}

int		my_window(int argc, char **argv)
{
  t_struct	*maps;
  int		status;
  int		finish;
  int		enemy_pid;
  WINDOW	*wlist;

  init_window();
  curs_set(0);
  wlist = newwin(10, 40, LINES / 2 - 5,COLS / 2 - 20);
  attron(A_BOLD);
  mvprintw(LINES / 2 - 2, COLS / 2 - 4, "my_pid :");
  mvprintw(LINES / 2 - 1, COLS / 2 - 2, "%d", getpid());
  box(wlist, 0, 0);
  wrefresh(wlist);
  if ((maps = my_parse_fill(argc, argv)) == NULL)
    return (84);
  enemy_pid = connexion(argc, argv, wlist);
  status = argc % 2;
  print_map(maps, 1);
  refresh();
  finish = navy(enemy_pid, status, maps);
  endwin();
  return (finish);
}

int		main(int argc, char **argv)
{
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
  finish = my_window(argc, argv);
  return (finish);
}
