#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <strings.h>
#include<limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _puts(char *str);
int _print_di(int di);
int _strlen(char *s);
int switch_c(char, va_list);
int print_hex(unsigned int n);
void print_rev(char *s);
void strtobin(unsigned int toconvert, unsigned int *ones);

#endif
