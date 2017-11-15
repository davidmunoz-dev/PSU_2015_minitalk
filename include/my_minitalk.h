/*
** my_minitalk.h for c in /PSU_2015_minitalk/include
** 
** Made by David Munoz
** Login   <munoz_d@epitech.net>
** 
** Started on  Thu Feb 18 18:09:04 2016 David Munoz
** Last update Thu Feb 18 18:09:17 2016 David Munoz
*/

#ifndef MINITALK_H_
# define MINITALK_H_

#define _BSD_SOURCE
#define _POSIX_SOURCE
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <stdio.h>
#include <sys/wait.h>

# define RED                    "\033[1;31m"
# define GREEN                  "\033[1;32m"
# define PURPLE                 "\033[1;35m"
# define CYAN                   "\033[1;36m"
# define BROWN                  "\033[0;33m"
# define BLUE                   "\033[1;34m"
# define YELLOW                 "\033[1;33m"
# define BLANK                  "\033[0m"

# define BEGIN_DATA	PURPLE "\n----------------DATA----------------\n"	BLANK
# define END_DATA	PURPLE "\n-------------END OF DATA------------\n\n"	BLANK

void    my_aff(int nb);
void    sig(int sign);
void    my_sig();
void    send_msg(int s_pid, char msg);
void    prompt();

#endif /* MINITALK_H_ ! */
