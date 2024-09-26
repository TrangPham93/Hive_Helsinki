# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/24 12:33:04 by trpham            #+#    #+#              #
#    Updated: 2024/09/25 10:38:22 by trpham           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

gcc -c -Wall -Wextra -Werror ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rc libft.a ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ranlib libft.a
