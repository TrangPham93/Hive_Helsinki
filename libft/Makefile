# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 15:05:22 by trpham            #+#    #+#              #
#    Updated: 2024/11/18 19:23:25 by trpham           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c \
       ft_isdigit.c \
       ft_isalnum.c \
       ft_isascii.c \
       ft_isprint.c \
       ft_strlen.c \
       ft_memset.c \
       ft_bzero.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_strlcat.c \
       ft_strlcpy.c \
       ft_toupper.c \
       ft_tolower.c \
       ft_strchr.c \
       ft_strrchr.c \
       ft_strncmp.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_strnstr.c \
       ft_atoi.c \
       ft_calloc.c \
       ft_strdup.c \
       ft_substr.c \
       ft_strjoin.c \
       ft_strtrim.c \
       ft_split.c \
       ft_itoa.c \
       ft_strmapi.c \
       ft_striteri.c \
       ft_putchar_fd.c \
       ft_putstr_fd.c \
       ft_putendl_fd.c \
       ft_putnbr_fd.c

SRCS_BONUS = ft_lstnew_bonus.c \
              ft_lstadd_front_bonus.c \
              ft_lstsize_bonus.c \
              ft_lstlast_bonus.c \
              ft_lstadd_back_bonus.c \
              ft_lstdelone_bonus.c \
              ft_lstiter_bonus.c \
              ft_lstclear_bonus.c \
              ft_lstmap_bonus.c

OBJECT = $(SRCS:%.c=%.o)
OBJECT_BONUS = $(SRCS_BONUS:%.c=%.o)

#  .a is a static library, which mean the files are combined at compiling time
NAME = libft.a
BONUS_NAME = .bonus

all:  $(NAME)

# Rule to create the .c files to .o files
# Compile or assemble the source files, but do not link. The linking stage simply is not done.
# The ultimate output is in the form of an object file for each source file.
# $@ is the name of the target being generated, and $< the first prerequisite
# -o file Place the primary output in file file, 
# If -o is not specified, the default is to put an executable file in a.out

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

# Create the actual library
# ar maintain archive libraries, which is a collection of files, typically object files.
#  create a new library, add members to an existing library, delete members from a library,
#  extract members from a library, and print a table of contents for a library.
#  -r Replaces or adds file to archive.
#  -c Suppresses the message that is normally printed when ar creates a new archive file
#  -s Regenerates the external symbol table regardless of whether the command modifies the archive.
#  -rcs rcs can be seen to mean replace, create, sort
# $^ prequisite files, which mean the OBJECT

$(NAME): $(OBJECT)
	ar rcs $(NAME) $^

bonus: $(BONUS_NAME) 

$(BONUS_NAME): $(OBJECT) $(OBJECT_BONUS)
	ar rcs $(NAME) $^
	touch $(BONUS_NAME)

# Clean: removes the output of other targets
clean:
	rm -f $(OBJECT) $(OBJECT_BONUS)

# Fclean: remove all generrated files
fclean: clean
	rm -f $(NAME) $(BONUS_NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(SRCS_BONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJECT) $(OBJECT_BONUS)

.PHONY: all clean fclean re bonus



