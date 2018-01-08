/*
** my_putstr.c for my_putstr in /home/chenne_a/rendu/PSU_2015_my_printf/PSU_2015_my_printf
** 
** Made by Arthur Chennetier
** Login   <chenne_a@epitech.net>
** 
** Started on  Mon Nov 16 15:13:50 2015 Arthur Chennetier
** Last update Mon Nov 16 15:16:30 2015 Arthur Chennetier
*/

int	my_putstr(char	*str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}
