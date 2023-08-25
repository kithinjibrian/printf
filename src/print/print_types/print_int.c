#include "../../../main.h"

int print_int(va_list args, char *buffer, int position)
{
	int c = va_arg(args, int);

	if (c < 0)
	{
		handle_buffer('-', buffer, position);
	}

	return (handle_buffer(c, buffer, position));
}