#include "../../main.h"

int print_buffer(char *buffer, int position)
{
	return (write(1, buffer, position));
}