#include "main.h"

int _printf(const char *format, ...)
{
	int (*function)(va_list, char *, int);
	int len = 0, i = 0;
	;
	char *buffer = malloc(sizeof(char) * BUFFER_SIZE);
	int position = 0;

	va_list args;
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			function = strategy(*format);
			len = function(args, buffer, position);
		}
		else
		{
			handle_buffer(*format, buffer, position);
			len++;
		}
		for (position = len; position > 1024; position -= 1024)
			;
		format++;
		i++;
	}

	print_buffer(buffer, position);

	va_end(args);

	free(buffer);
	return (len);
}