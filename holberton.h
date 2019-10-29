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
char *itoa(int incoming, char* buff, int rad);

#endif
