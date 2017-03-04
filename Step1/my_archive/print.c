/*
** print.c for  in /home/Mystik/Projets/CPE_2016_BSQ
** 
** Made by Tom Gardelle
** Login   <Mystik@epitech.net>
** 
** Started on  Fri Dec  9 16:11:54 2016 Tom Gardelle
** Last update Thu Feb 23 15:20:23 2017 Tom Gardelle
*/

#include "stick.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}

int	my_put_nbr(int nb)
{
  int	nbmax;

  nbmax = 1000000000;
  if (nb == 0)
    {
      my_putchar('0');
      return (0);
    }
  if (nb < 0)
    {
      nb = nb * (-1);
      my_putchar('-');
    }
  while (nb / nbmax == 0)
    {
      nbmax = nbmax / 10;
    }
  my_putchar((nb / nbmax) + 48);
  while (nbmax != 1)
    {
      nbmax = nbmax / 10;
      my_putchar((nb / nbmax) % 10 + 48);
    }
  return (0);
}

char	my_putchar(char c)
{
  write(1, &c, 1);
}

char	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

int     my_getnbr(char *str)
{
  int	len;
  int	mod;
  int	nbr;

  len = my_strlen(str);
  mod = 1;
  nbr = 48;
  while (len >= 0)
    {
      nbr = nbr + (str[len] - 48) * mod;
      mod = mod * 10;
      len = len - 1;
    }
  nbr = nbr / 10;
  return (nbr);
}
