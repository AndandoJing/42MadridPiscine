#include <unistd.h>

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
  return (0);
  
}

void  ft_init_grid(int grid[4][4])
{
  int  i;

  i = 0;
  while (i < 16)
    {
      grid[i / 4][i % 4] = 0;
      i++;
    }
}

int  main(int argc, char **argv)
{
  int  grid[4][4];
  int  clues[16];

  if (argc != 2) || !ft_read_clues(argv[1], clues))
  {
    ft_error();
    return (0);
  }
  ft_init_grid(grid);
  if (ft_solve(grid, clues, 0))
  {
    ft_print_grid(grid);
  }
  else
  {
    ft_error();
  }
  return (0);
}


