#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>

/**
 * struct specifier - specifier structure
 * @specifier: format specifier
 * @f: format specifier function
*/
typedef struct specifier {
	char specifier;
	int (*f)(va_list);
} specifier_t;

int _printf(const char *format, ...);
int print_string(const char *str);

#endif /* _MAIN_H_ */