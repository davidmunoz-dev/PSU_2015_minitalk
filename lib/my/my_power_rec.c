/*
** my_power_rec.c for Exercice 4 in /home/munoz_d/rendu/Piscine_C_J05
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Mon Oct  5 22:35:31 2015 munoz david
** Last update Tue Oct  6 10:52:57 2015 munoz david
*/

int	my_power_rec(int nb, int power)
{
  int	i;
  int	resultat;

  resultat = nb;
  i = 1;
  if (nb == 0)
    return (0);
  if (power == 0)
    return (1);
  if (power > i)
    {
      return (nb * my_power_rec(nb, power - 1));
    }
  return (0);
}
