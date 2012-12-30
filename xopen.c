/*
** xopen.c for libmy.a
** 
** Made by matthieu przybylski
** Login   <przyby_m@epitech.net>
** 
** Started on  Tue Mar 13 10:09:32 2012 matthieu przybylski
** Last update Fri Mar 23 17:28:02 2012 matthieu przybylski
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"

int     xopen(char *str, int flags)
{
  int   fd;

  fd = open(str, flags);
  if (fd == -1)
    {
      my_putstr_err("Error: file ");
      my_putstr_err(str);
      xexit(" not accessible\n");
    }
  return (fd);
}
