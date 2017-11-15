/*
** error.c for l in /home/munoz_d/CPE_2015_BSQ/src
**
** Made by Munoz David
** Login   <munoz_d@epitech.net>
**
** Started on  Sun Dec 20 21:36:25 2015 Munoz David
** Last update Wed Feb 10 00:32:11 2016 David Munoz
*/

#include "my.h"
#include "my_minitalk.h"

void	my_aff(int nb)
{
  static char   my_letter;
  static int    i;

  my_letter = my_letter + (nb << i++);
  if (i > 7)
    {
      if (my_letter == '\0')
	  my_putstr(END_DATA);
      else
        my_putchar(my_letter);
      my_letter = 0;
      i = 0;
    }
}

void	sig(int sign)
{
  if (sign == SIGUSR1)
    my_aff(1);
  if (sign == SIGUSR2)
    my_aff(0);
}

void	my_sig()
{
  if (signal(SIGUSR1, sig) == SIG_ERR)
    {
      my_putstr(RED"Signal error.\n"BLANK);
      exit(0);
    }
  if (signal(SIGUSR2, sig) == SIG_ERR)
    {
      my_putstr(RED"Signal error.\n"BLANK);
      exit(0);
    }
}

void	prompt()
{
  my_putstr(GREEN"Welcome to the server\nPID : [");
  my_put_nbr(getpid());
  my_putstr("]\n"BLANK);
  while (1)
    my_sig();
}

int	main(void)
{
  prompt();
  return (0);
}
