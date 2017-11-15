/*
** my.h for EXERCICE 2 in /home/munoz_d/rendu/Piscine_C_J09
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Fri Oct  9 13:51:01 2015 munoz david
** Last update Sun Nov 29 16:50:22 2015 Munoz David
*/

#ifndef _VA_LIST_DEFINED
#ifdef _M_CEE_PURE
typedef System::ArgIterator va_list;
#else
typedef char *  va_list;
#endif
#define _VA_LIST_DEFINED
#endif


#ifndef MY_H_
# define MY_H_

int	my_find_prime_sup(int nb);
int	my_getnbr(char *str);
int	my_isneg(int nb);
int	my_is_prime(int nombre);
int	my_power_rec(int nb, int power);
void	my_putchar(char c);
int	my_put_nbr(int nbr);
int	my_putstr(char *str);
char	*my_revstr(char *str);
int	*my_showmem(char *str, int size);
int	my_showstr(char *str);
void	my_sort_int_tab(int *tab, int size);
int	my_square_root(int nb);
char	*my_strcapitalize(char *str);
char	*my_strcat(char *dest, char *src);
int	my_strcmp(char *s1, char *s2);
char	*my_strcpy(char *dest, char *src);
int	my_str_isalpha(char *str);
int	my_str_islower(char *str);
int	my_str_isnum(char *str);
int	my_str_isprintable(char *str);
int	my_str_isupper(char *str);
int	my_strlcat(char *dest, char *src, int size);
int	my_strlen (char *str);
char	*my_strlowcase(char *str);
char	*my_strncat(char *dest, char *src, int nb);
int	my_strncmp(char *s1, char *s2, int nb);
char	*my_strncpy(char *dest, char *src, int nb);
char	*my_strstr(char *str, char *to_find);
char	*my_strupcase(char *str);
int	my_swap(int *a, int *b);

#endif /* !MY_H_ */
