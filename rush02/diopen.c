


#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	fd; 
	//ssize_t	bytes_read;
	char	*buffer;
	
	// open the numbers.dict, read_only mode
	fd = open("numbers.dict",O_RDONLY);
	// the printf of fd is 3, because 0,1,2 have been taken. 0 is stdin, 1 is stdout, 2 is stderror
	// printf("fd = %d \n", fd);
	// if fd is -1, dictionary openning does not succeed
	if (fd == -1)
		printf("%s\n","Dict Error\n");
	
	// create a buffer of size 1024 to read the numbers.dict into. 
	// read fuction will return the bytes size. 
	// if the bytes size is still larger than 0, continue to read and print
	buffer = malloc (1024);
	while (read(fd, buffer, 1024)> 0)
	{
		//buffer[bytes_read] = '\0';
		printf("%s", buffer);
	}
	/*
	if (bytes_read < 0)
	{
		printf("%s\n", "Dict Error\n");
	}
	*/
	// always close after open file
	close(fd);
	free(buffer);
	
	return 0;
}
