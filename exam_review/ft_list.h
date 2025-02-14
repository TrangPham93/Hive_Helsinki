/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:33:22 by trpham            #+#    #+#             */
/*   Updated: 2025/02/14 17:06:58 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_LIST_H
# define FT_LIST_H

typedef struct s_list
{
	struct s_list	*next;
	void 			*data;
}					t_list;

# endif