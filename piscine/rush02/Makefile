# Define the compiler
CC = gcc

# Define the flags for the compiler
CFLAGS = -Wall -Wextra -Werror

# Define the target name
TARGET = rush-02

# Define the source file
SRC = rush02.c ft_atoi.c ft_putnbr.c ft_strcmp.c

# The default target
all: $(TARGET)

# Rule to create the target executable
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)
	
# Rule to run the program with arguments
run: $(TARGET)
	./$(TARGET) $(args)

# Full clean up: remove all generated files
fclean: clean
	rm -f $(TARGET)

# Rebuild the project
re: fclean all

.PHONY: all clean fclean run re	

