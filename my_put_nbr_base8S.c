/*
** my_put_nbr_base8.c for my_put_nbr_base8 in /home/chenne_a
** 
** Made by Arthur Chennetier
** Login   <chenne_a@epitech.net>
** 
** Started on  Thu Nov 12 16:02:47 2015 Arthur Chennetier
** Last update Thu Nov 12 19:02:10 2015 Arthur Chennetier
*/

#include <stdarg.h>

int	my_put_nbr_base8S(unsigned int nb)
{
  int		divide;
  unsigned int	digit;
  char		*base;

  base = "01234567";
  divide = 1;
  if (nb < 0 && nb > - 2147483647)
    {
      my_putchar('-');
      nb = - nb;
    }
  while (nb / divide >= 8)
    divide = divide * 8;
  while (divide > 0)
    {
      digit = (nb / divide) % 8;
      my_putchar(base[digit]);
      divide = divide / 8;
    }
  return (0);
}
