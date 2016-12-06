/*
** popup.c for  in /home/mathias/Bureau
** 
** Made by Mathias
** Login   <mathias.descoin@epitech.eu@epitech.net>
** 
** Started on  Tue Dec  6 14:07:27 2016 Mathias
** Last update Tue Dec  6 14:52:47 2016 Mathias
*/

#include <ncurses.h>
#include <string.h>

int main(int av, char **ac)
{
  if (av == 2)
    {
      initscr();
      while (1)
	{
	  clear();
	  mvprintw(LINES/2, (COLS/2) - (strlen(ac[1]) / 2), ac[1]);
	  refresh();
	  if (getch() == ' ')
	    break;
	}
      endwin();
    }
}
