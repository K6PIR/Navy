/*
** my.h for my_h in /home/sachs_a/delivery/system_unix/PSU_2016_navy/include
**
** Made by Alexandre Sachs
** Login   <sachs_a@epitech.net>
**
** Started on  Mon Jan 30 10:46:41 2017 Alexandre Sachs
** Last update Jun Feb 17 09:10:45 2017
*/

#ifndef MY_H_
# define MY_H_

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <signal.h>
# include <time.h>
# include <ncurses.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define UNUSED __attribute__((unused))

typedef struct	s_struct
{
  int		fd;
  char		**file;
  char		**tab;
  char		**tab_enemy;
}		t_struct;

typedef struct	s_position
{
  int		col;
  int		line;
}		t_position;

/*
** LIB
*/
char		**my_str_to_wordtab(char *, char);
int		my_strncmp(char *, char *, int);
int		my_strcmp(char *, char *);
int		my_swap(char *, char *);
int		decimal_to_binary(int);
int		binary_to_decimal(int);
int		my_printf(char *, ...);
int		my_getnbr(char *);
int		my_strlen(char *);
int		tablen(char **);
int		power(int, int);

/*
** MAPS
*/
t_struct	*my_parse_fill(int, char **);
int		filling_lines(t_struct *, char **, int);
int		filling_cols(t_struct *, char **, int);
int		update_map(char **, t_position, int);
int		fill_my_boat(t_struct *, char **);
int		my_malloc_fill_enemy(t_struct *);
int		show_stats(t_struct *, int);
int		which_boat(t_struct *, int);
int		my_malloc_fill(t_struct *);
int		print_map(t_struct *, int);
int		check_size(char **);
int		my_verifi(char **);
int		is_char_navy(char);
int		is_num_navy(char);
int		resize_window();

/*
** COMMUNICATIONS
*/
pid_t		connexion(int, char **, WINDOW *);
pid_t		pid_reception(pid_t);
int		init_sigaction_communication();
int		binary_transmitter(pid_t, int);
int		validation_sending(int, int);
int		init_sigaction_connexion();
int		binary_reception(int);
int		target_reception();

/*
** GAME
*/
char		*optimize_position(char *);
int		hit_or_miss(t_position, char **);
int		navy(int, int, t_struct *);
int		defense(int, t_struct *);
int		attack(int, t_struct *);
int		free_struct(t_struct *);
int		verif_position(char *);
int		game_over(t_struct *);

#endif /* !MY_H_ */
