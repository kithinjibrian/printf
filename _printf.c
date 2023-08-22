#include "main.h"

int _printf(const char *format, ...)
{
	int printed_chars = 0;

	va_list args;
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 'c':
				putchar(va_arg(args, int));
				printed_chars++;
				break;

			case 's':
				printed_chars += printf("%s", va_arg(args, const char *));
				break;

			case '%':
				putchar('%');
				printed_chars++;
				break;

			default:
				break;
			}
		}
		else
		{
			putchar(*format);
		}
		format++;
	}
	va_end(args);

	return (printed_chars);
}