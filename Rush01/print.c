void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void  ft_error(void)
{
  write(2, "Errror\n", 1);
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
