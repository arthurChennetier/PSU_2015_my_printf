/*
** my_put_nbr_base.c for my_put_nbr_base in /home/chenne_a/rendu/
** 
** Made by Arthur Chennetier
** Login   <chenne_a@epitech.net>
** 
** Started on  Wed Nov 11 15:14:54 2015 Arthur Chennetier
** Last update Mon Nov 16 17:53:01 2015 Arthur Chennetier
*/

#include <stdarg.h>

int	my_put_nbr_base16(va_list va)
{
  int		divide;
  unsigned int	digit;
  unsigned int	nb;
  char		*base;

  base = "0123456789abcdef";
  nb = va_arg(va, unsigned int);
  divide = 1;
  if (nb < 0 && nb > - 2147483647)
    {
      my_putchar('-');
      nb = - nb;
    }
  while (nb / divide >= 16)
    divide = divide * 16;
  while (divide > 0)
    {
      digit = (nb / divide) % 16;
      my_putchar(base[digit]);
      divide = divide / 16;
    }
  return (0);
}
