#include <unistd.h>
#include <stdlib.h>

int count_word(char *s)
{
	int count = 0;

	while (*s)
	{
		if (*s == '_')
		{
			s++;
			count++;
		}
	}
	return (count);
}


int main(int ac, char **av)
{
	// int len;
	// int dup;
	// int i;
	char c;

	if (ac ==2)
	{
		// len = 0;
		// i = 0;
		// while (av[1][len])
		// 	len++;
		// dup = malloc(sizeof(char) * (len - count_word(av[1]) + 1));	
		// if (!dup)
		// 	return (NULL);
		while (*av[1])
		{
			if (*av[1] == '_')
			{
				av[1]++;
				c = *av[1] - 32;
				write(1, &c, 1);
			}
			else
				write(1, &*av[1], 1);
			av[1]++;
		}		
	}
	write(1, "\n", 1);
}