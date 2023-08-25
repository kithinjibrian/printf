#include "../../../main.h"

int print_percent(va_list args, char *buffer, int position)
{
	(void)args;
	return (handle_buffer('%', buffer, position));
}