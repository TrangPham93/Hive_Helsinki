#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int len;
	int *int_arr;
	int i = 0;

	if (start <= end)
		len = end - start + 1;
	else
		len = start - end + 1;
	int_arr = malloc(sizeof(int) * (len));
	while (i < len)
	{
		if (start <= end)
			int_arr[i] = end - i;
		else
			int_arr[i] = end + i;
		i++;
	}
	return (int_arr);
}
#include <stdio.h>

int main()
{
	int *arr;
	int i = 0;

	arr = ft_range(1, 3);
	while (i < 4)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	free(arr);
}