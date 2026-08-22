#include <unistd.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void  ft_error(void)
{
  write(1, "Errror\n", 1);
}

void  ft_read_clues(char *intput_s, int *clues)
{
  int  i;

  i = 0;
  while (i < 16)
  {
    if ((intput_s[i * 2] < '1' || s[i * 2] > '4')
    {
    return (0);
    }
    if (i < 15 && input_s[i * 2 + 1] != ' ')
    {
    return (0);
    }
  clues[i] = input_str(i * 2) - '0';
  i++;
  }
}

int  main(int argc, char **argv)
{
  int  g[4][4];
  int  clues[16];

  if (argc != 2) || !ft_read_clues(argv[1], clues))
  {
    ft_error();
    return (0);
  }
  ft_clear_grid(g);
  if (ft_solve(g, clues, 0))
  {
    ft_print_grid(g);
  }
  else
  {
    ft_error();
  }
  return (0);
  }
}


