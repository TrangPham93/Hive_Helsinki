/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 11:50:26 by trpham            #+#    #+#             */
/*   Updated: 2024/09/15 11:50:28 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == ' '
			|| (str[i] >= 9 && str[i] <= 13))
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	a;
	long	nbrl;

	a = ft_base(base);
	if (a < 2)
		return ;
	if (nbr == -2147483648)
	{	
		ft_putchar('-');
		nbrl = 2147483648;
		if (nbrl >= a)
			ft_putnbr_base((nbrl / a), base);
		ft_putchar(base[nbrl % a]);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}	
	if (nbr >= a)
		ft_putnbr_base((nbr / a), base);
	ft_putchar(base[nbr % a]);
}
/*
int	main(void )
{
	ft_putnbr_base(123, "01");
	write(1,"\n",1);
	ft_putnbr_base(123, "0123456789");
	write(1,"\n",1);
	ft_putnbr_base(123, "0123456789ABCDEF");
	write(1,"\n",1);
	ft_putnbr_base(123, "poneyvif");
	write(1,"\n",1);
	ft_putnbr_base(-2147483648, "0123456789");
	write(1,"\n",1);
	ft_putnbr_base(-2147483648, "0123456789ABCDEF");
	write(1,"\n",1);
	ft_putnbr_base(-2147483648, "01");
	write(1,"\n",1);
	return (0);
}
*/
