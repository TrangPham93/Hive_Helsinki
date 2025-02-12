#include <unistd.h>

int	ft_len(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}

int main(int ac, char **av)
{
	int len;
	int end;

	if (ac == 2)
	{
		len = ft_len(av[1]) - 1;
		
		while ((av[1][len] == 9 || av[1][len] == 32) && len >= 0)
			len--;
		end = len;
		while (av[1][len] != 9 && av[1][len] != 32 && len >= 0)
			len--;
		
		while (++len <= end && end != 0)
		{
			write(1, &av[1][len], 1);
		}
		 
	}
	write(1, "\n", 1);
}