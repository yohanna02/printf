#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>

#define UNUSED(x) (void)(x)
#define BUFFER_SIZE 1024

int add_to_buffer(char *buffer, int *buffer_index, char c);
void flush_buffer(char *buffer, int *buffer_index);

/**
 * struct spec  - specifier structure
 * @specifier: format specifier
 * @f: format specifier function
*/
typedef struct spec
{
	char specifier;
	int (*f)(va_list, char *, int *);
} specifier_t;

int _putchar(char c);

int _printf(const char *format, ...);
int _puts(char *, char *, int *);
int (*select_specifier(char specifier))(va_list, char *, int *);
int print_string(va_list, char *, int *);
int print_char(va_list, char *, int *);
int print_percent(va_list, char *, int *);
int print_number(va_list, char *, int *);
int print_binary(va_list, char *, int *);
int print_unsigned_number(va_list, char *, int *);
int print_octal_number(va_list, char *, int *);
int print_hex_x(va_list, char *, int *);
int print_hex_X(va_list, char *, int *);
int print_pointer(va_list, char *, int *);

/* void print_binary_reursion(unsigned int n); */

#endif /* _MAIN_H_ */
