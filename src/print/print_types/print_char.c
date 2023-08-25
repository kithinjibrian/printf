#include "../../../main.h"

int print_char(va_list args, char *buffer, int position)
{
	char c = va_arg(args, int);
	return (handle_buffer(c, buffer, position));
}