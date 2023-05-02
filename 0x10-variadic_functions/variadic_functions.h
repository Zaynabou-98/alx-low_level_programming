#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_

#include <stdarg.h>
#include <stdio.h>
// declare the sum
int sum_them_all(const unsigned int n, ...);
// print the numbers
void print_numbers(const char *separator, const unsigned int n, ...);
// print the strings
void print_strings(const char *separator, const unsigned int n, ...);
//print all
void print_all(const char * const format, ...);

#endif
