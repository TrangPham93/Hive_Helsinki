/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:54:33 by trpham            #+#    #+#             */
/*   Updated: 2024/11/05 21:49:01 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h> 
# include <stdlib.h>

// char functions
int		ft_isalpha(unsigned char c);
int		ft_isdigit(unsigned char c);
int		ft_isalnum(unsigned char c);
int		ft_isascii(unsigned char c);
int		ft_isprint(unsigned char c);
int		ft_toupper(int c);

// string functions
int		ft_strlen(char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void	*s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

#endif