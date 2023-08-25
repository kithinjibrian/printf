#include "../../main.h"

int handle_buffer(char c, char *buffer, int position)
{
	if (position == BUFFER_SIZE)
	{
		print_buffer(buffer, position);
		position = 0;
	}
	buffer[position] = c;
	position++;
	return (position);
}