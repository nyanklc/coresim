/**
 * Using float, change to double if higher precision is required.
 */

#ifndef CORESIM_MATH_NUMBER_H
#define CORESIM_MATH_NUMBER_H

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef int8_t exponent_t;

// Single digit before decimal point, scientific notation.
// Exponent as in 10's powers.
typedef struct number
{
	float num;
	exponent_t exp;
} number;

number *number_create(float n, exponent_t e);
void number_destroy(number* nu);
void number_print(number* n);
void number_format(number* nu);
// Returns a copy of n2 that has the same exponent as n1.
number number_same_exponent(number* n1, const number* n2);
// Add n2 to n1.
void number_add(number* n1, const number* n2);
// Subtract n2 from n1.
void number_subtract(number* n1, const number* n2);
// Multiply n1 by n2.
void number_multiply(number* n1, const number* n2);
// Divide n1 by n2.
void number_divide(number* n1, const number* n2);

#endif