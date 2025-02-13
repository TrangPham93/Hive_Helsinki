int		max(int* tab, unsigned int len)
{
	int max;
	int i;

	i = 0;
	max = tab[0];
	if ((int)len == 0 || !tab)
		return (0);
	while (i < (int)len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;	
	}
	return (max);
}
#include <stdio.h>

int main()
{
	int tab[5] = {3, 4, 1, 43, 8};
	printf("%d\n", max(tab, 5));
}