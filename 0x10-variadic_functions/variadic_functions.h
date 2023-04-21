#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);


void print_all(const char * const format, ...);

/**
 * struct datas - struct
 * @letter: letter signifying data type
 * @func: function ptr
 */
typedef struct datas
{
	char letter;
	void (*func)(va_list);
} data;


#endif
