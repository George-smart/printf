#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct typ_print - defines a structute that associate identifier with
 * the required function
 * @ident: the indentifier
 * @func: the required function to handle the given indentifier
 */
typedef struct typ_print
{
	char *ident;
	int (*func)(va_list);
} typ; /*use typ instead of struct typ_print*/

/*prototypes of the major functions*/

int _printf(const char *format, ...);
int _putchar(char);
int check_format_func(const char *format, va_list, func);
int print_char(va_list);
int print_str(va_list);
int print_percent(va_list);
int print_int(va_list);
int print_num(va_list);
int print_bin(va_list);
int print_rev(va_list);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list);
int print_hex(va_list);
int print_heX(va_list);


#endif
