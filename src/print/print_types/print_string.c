#include "../../../main.h"

int print_string(va_list args, char *buffer, int position)
{
	char *c = va_arg(args, char *);
	int i;
	for (i = 0; c[i]; i++)
	{
		position = handle_buffer(c[i], buffer, position);
	}
	return (position);
}