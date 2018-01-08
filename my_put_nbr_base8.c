/*
** my_put_nbr_base8.c for my_put_nbr_base8 in /home
** 
** Made by Arthur Chennetier
** Login   <chenne_a@epitech.net>
** 
** Started on  Thu Nov 12 16:02:47 2015 Arthur Chennetier
** Last update Mon Nov 16 17:56:23 2015 Arthur Chennetier
*/

#include <stdarg.h>

int	my_put_nbr_base8(va_list va)
{
  int		divide;
  unsigned int	digit;
  unsigned int	nb;
  char		*base;

  base = "01234567";
  nb = va_arg(va, unsigned int);
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
