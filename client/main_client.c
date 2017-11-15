/*
** main_client.c for d in /PSU_2015_minitalk/client
** 
** Made by David Munoz
** Login   <munoz_d@epitech.net>
** 
** Started on  Thu Feb 18 14:18:23 2016 David Munoz
** Last update Thu Feb 18 18:06:49 2016 David Munoz
*/

#include "my_minitalk.h"
#include "my.h"

void	send_msg(int s_pid, char msg)
{
  int	right;

  right = 0;
  while (right < 8)
    {
      usleep(250);
      if (((msg >> right) & 1) == 1)
        kill(s_pid, SIGUSR1);
      else
        kill(s_pid, SIGUSR2);
      right++;
    }
}

void	print_info(char *str)
{
  int	pid;
  int	len;

  pid = getpid();
  len = my_strlen(str);
  printf("\nClient PID : %d\n\n", pid);
  my_putstr(CYAN"Checking data...\n"BLANK);
  printf("\nData : %d bytes.\n", len);
  my_putstr(GREEN"[OK]\n\n"BLANK);
}

int	main(int ac, char **av)
{
  char	*message;
  int	s_pid;
  int	i;

  if (ac == 3)
    {
      message = av[2];
      s_pid = my_getnbr(av[1]);
      if (s_pid == -1)
	{
	  my_putstr(RED"Error : Invalid PID\n"BLANK);
	  return (1);
	}
      print_info(message);
      i = -1;
      while (message[++i] != '\0')
	send_msg(s_pid, message[i]);
      send_msg(s_pid, message[i]);
      my_putstr(GREEN"Server : transfer completed.\n"BLANK);
      usleep(300);
      return (0);
    }
  else
    my_putstr(RED"Error : ./client [server PID] [message]\n" BLANK);
  return (1);
}
