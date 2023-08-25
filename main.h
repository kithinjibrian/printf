#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

#define BUFFER_SIZE 1024

typedef struct
{
	char *format;
	int (*function)(va_list, char *, int);
} Operation;

int _printf(const char *format, ...);

int print_buffer(char *buffer, int position);
int handle_buffer(char c, char *buffer, int position);

int (*strategy(char format))(va_list, char *, int);
int print_char(va_list args, char *buffer, int position);
int print_int(va_list args, char *buffer, int position);

#endif