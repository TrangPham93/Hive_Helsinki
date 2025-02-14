

int ft_char_to_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	else
		return (-1);
}
// int is_valid(char c, int base_len)
// {
// 	int i;
// 	char *lbase = "0123456789abcdef";
// 	char *ubase = "0123456789ABCDEF";

// 	i = 0;
// 	while (i < base_len)
// 	{
// 		if (lbase[i] == c || ubase[i] == c)
// 			return (0);
// 		i++;
// 	}
// 	return (-1);
// }

int	ft_atoi_base(const char *str, int str_base)
{
	
	int sign;
	int i = 0;
	int digit;
	int result = 0;

	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		digit = ft_char_to_digit(str[i]);
		if (digit == -1 || digit >= str_base)
			break;
		result = result * str_base + digit;
		i++;
	}
	return (result * sign);
}
#include <stdio.h>

int main()
{
	printf("%d\n", ft_atoi_base("101", 2));
}