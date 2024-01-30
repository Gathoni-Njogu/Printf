#ifndef MAIN_H
#define MAIN_H_
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * struct format - define a struct with typedef for a specifier & fct
 *
 * @id: specifier to the char
 * @f: fct associate to the specifier
 */
typedef struct format
{
	char *id;
	int (*f)();
} match;

int _printf(const char *format, ...);

int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
int print_dec(va_list args);
int print_int(va_list args);
int print_bin(va_list val);
int print_unsigned(va_list args);
int print_oct(va_list val);
int print_hexa(va_list val);
int print_HEXA(va_list val);
int print_nonprint(va_list val);
int print_HEXA_extra(unsigned int num);
int print_hexa_extra(unsigned long int num);
int print_point(va_list val);
int print_revs(va_list args);
int print_rot13(va_list args);
int _putchar(char c);


int printf_char(va_list args);
int printf_string(va_list args);


#endif








































