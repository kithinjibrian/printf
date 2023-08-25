#include "../main.h"

int (*strategy(char format))(va_list, char *, int)
{
	int i = 0;

	Operation operations[] = {
		{"c", print_char},
		{"d", print_int},
		{NULL, NULL}};

	while (operations[i].format)
	{
		if (*operations[i].format == format)
		{
			break;
		}
		else
		{
			i++;
		}
	}

	return (operations[i].function);
}