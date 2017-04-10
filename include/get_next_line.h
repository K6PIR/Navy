/*
** get_next_line.h for Get_Next_Line in /home/invicta/CPE_2016_getnextline/
**
** Made by Kellian CIPIERRE
** Login   <kellian.cipierre@epitech.eu>
**
** Started on  Tue Jan  3 09:14:18 2017 Kellian CIPIERRE
** Last update Jun Feb 17 09:11:12 2017
*/
#ifndef GET_NEXT_LINE_H_

# ifndef READ_SIZE
#  define READ_SIZE (2)
# endif	/* READ_SIZE */

typedef struct	s_gnl
{
   ssize_t	size;
   char		buff[READ_SIZE + 1];
   int		pos;
}		t_gnl;

char			*get_next_line(const int fd);

#endif	/* GET_NEXT_LINE_H_ */
