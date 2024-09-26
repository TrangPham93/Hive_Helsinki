#include <unistd.h>

void	ft_putchar(char c);

void	ft_line(char first, char middle, char last, int length)
{
	int	count;

	count = 1;
	while (count <= length)
	{
		if (count == 1)
		{
			ft_putchar(first);
		}
		else if (count == length)
		{
			ft_putchar(last);
		}		
		else
		{
			ft_putchar(middle);
		}
		count++;
	}
}

void	rush(int x, int y)
{
	int	count_width;
	int	count_row;

	count_width = 1;
	count_row = 1;
	while (count_row <= y)
	{
		count_width = 1;
		if (count_row == 1 || count_row == y)
		{
			ft_line('o', '-', 'o', x);
		}
		else
		{
			ft_line('|', ' ', '|', x);
		}
		write (1, " \n", 2);
		count_row++;
	}
}
