/*
** my_strlen.c for my_strlen in /home/chenne_a/rendu/Piscine_C_J04
** 
** Made by Arthur Chennetier
** Login   <chenne_a@epitech.net>
** 
** Started on  Thu Oct  1 16:15:50 2015 Arthur Chennetier
** Last update Fri Oct  9 09:00:26 2015 Arthur Chennetier
*/

int	my_strlen(char *str)
{
  char	a;

  a = 0;
  while (str[a] != '\0')
    {
      a = a + 1;
    }
  return (a);
}
