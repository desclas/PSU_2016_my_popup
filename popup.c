/*
** popup.c for  in /home/mathias/Bureau
** 
** Made by Mathias
** Login   <mathias.descoin@epitech.eu@epitech.net>
** 
** Started on  Tue Dec  6 14:07:27 2016 Mathias
** Last update Tue Dec  6 15:08:02 2016 Mathias
*/

#include <ncurses.h>

int my_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    i += 1;
  return (i);
}

int main(int av, char **ac)
{
  if (av == 2)
    {
      initscr();
      while (1)
	{
	  clear();
	  mvprintw(LINES/2, (COLS/2) - (my_strlen(ac[1]) / 2), ac[1]);
	  refresh();
	  if (getch() == ' ')
	    break;
	}
      endwin();
    }
}
