#include "main.h"
#include <unistd.h>

int add_to_buffer(char *buffer, int *buffer_index, char c)
{
	if (*buffer_index == BUFFER_SIZE)
	{
		flush_buffer(buffer, buffer_index);		
	}
	buffer[(*buffer_index)] = c;
	(*buffer_index)++;
	
	return (1);
}

void flush_buffer(char *buffer, int *buffer_index)
{
	write(1, buffer, *buffer_index);
	*buffer_index = 0;
}
