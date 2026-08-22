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

int ft_if_repeats(int g[4][4], int row, int col, int val)
{
  int  i;

  i = 0;
  while (i < 4)
  {
    if (g[row][i] == val)
      return (1);
    if (g[i][col] == val)
      return (1);
    i++;
  }
  return (0);
}

int  ft_visible(int a, int b, int c, int d)
{
  int  visible;

  visible = 1;
  if (b > a)
    visible++;
  if (c > a && c > b)
    visible++;
  if (d > a && d > b && d > c)
    visible++;
  return (visible);
}

int ft_check(grid[4][4], int *clues, int row, int col)
{
  int  fwd;
  int  rev;
  
  if (row == 3)
  {
    fwd = ft_visible(grid[0][col], grid[1][col], grid[2][col], grid[3][col]);
    rev = ft_visible(grid[3][col], grid[2][col], grid[1][col], grid[0][col]);
    if (fwd != clues[0 + col] || rev != clues[4 + col])
      return (0);
  }
  if (col == 3)
  {
    fwd = ft_visible(grid[row][0], grid[row][1], grid[row][2], grid[row][3]);
    rev = ft_visible(grid[row][3], grid[row][2], grid[row][1], grid[row][0]);
    if (fwd != clues[8 + row] || rev != clues[12 + row])
      return (0);
  }
  return (1);
}

int  ft_solve(int grid[4][4], int *clues, int pos)
{
  int  row;
  int  col;
  int  val;

  if (pos == 16)
  {
    return (1);
  row = pos / 4;
  col = pos % 4;
  val = 1;
  while (val <= 4)
  {
    if (!ft_if_repeats(grid, row, col, val))
    {
      grid[row][col] = val;
      if (ft_check(grid, clues, row, col))
      {  
        if(ft_solve(grid, clues, pos + 1))
          return (1);
      }
      grid[row][rol] = 0;
    }
    val++;
  }
  return (0);
  }
}

void  ft_print_grid(int grid[4][4])
{
  int  row;
  int  col;

  row = 0;
  while (row < 4)
    {
        col = 0;
        while (col < 4)
          {
            ft_putchar(grid[row][col] + '0');
            if (col < 3)
              ft_putchar(' ');
            col++;
          }
    }
  ft_putchar('\0');
  row++;
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


