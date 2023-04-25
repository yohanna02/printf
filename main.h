#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>

/**
 * struct specifier - specifier structure
 * @specifier: format specifier
 * @f: format specifier function
*/
typedef struct {
	char specifier;
	int (*f)(va_list);
} specifier_t;

int _putchar(char c);

int _printf(const char *format, ...);
int (*select_specifier(char specifier))(va_list);
int print_string(va_list);
int print_char(va_list);
int print_percent(va_list);

#endif /* _MAIN_H_ */