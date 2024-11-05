/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:24:16 by trpham            #+#    #+#             */
/*   Updated: 2024/11/05 16:25:33 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

/* remember to compile header file and function file together
gcc main_test.c ft_strlen.c -o test_program
-o place the primary output in a file calle test_program
 */

int	main(void)
{
	printf("%d\n", ft_strlen("visao laithe"));
	printf("%d\n", strlen("Visao laithe"));
	return (0);
}