/*
** my_isneg.c for Exercice 4 in /home/munoz_d/rendu/Piscine_C_J03
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Wed Sep 30 14:29:13 2015 munoz david
** Last update Wed Oct  7 21:27:35 2015 munoz david
*/

#include "my.h"

int	my_isneg(int nb)
{
  if (nb < 0)
    {
      my_putchar('N');
    }
  else if (nb >= 0)
    {
      my_putchar('P');
    }
  return (0);
}
