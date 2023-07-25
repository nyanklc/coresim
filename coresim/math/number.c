#include "number.h"

number *number_create(float n, exponent_t e)
{
	number* nu = (number*)malloc(sizeof(number));
	if (!nu)
		return NULL;

	nu->num = n;
	nu->exp = e;
	return nu;
}

void number_destroy(number* nu)
{
	if (nu)
		free(nu);
}

void number_print(number *n)
{
	printf("number: %.2f x exp(%d)", n->num, n->exp);
}

void number_format(number* nu)
{
	while (nu->num >= 10.0f || nu->num <= -10.0f)
	{
		nu->num /= 10.0f;
		nu->exp++;
	}
}

number number_same_exponent(number* n1, const number* n2)
{
	number nu = *n2;

	while (nu.exp > n1->exp)
	{
		nu.num *= 10.0f;
		nu.exp--;
	}

	while (nu.exp < n1->exp)
	{
		nu.num /= 10.0f;
		nu.exp++;
	}

	return nu;
}

void number_add(number* n1, const number* n2)
{
	number n2_copy = number_same_exponent(n1, n2);
	n1->num += n2_copy.num;
	number_format(n1);
}

void number_subtract(number* n1, const number* n2)
{
	number n2_copy = number_same_exponent(n1, n2);
	n1->num -= n2_copy.num;
	number_format(n1);
}

void number_multiply(number* n1, const number* n2)
{
	n1->num *= n2->num;
	n1->num += n2->exp;
	number_format(n1);
}

void number_divide(number* n1, const number* n2)
{
	n1->num /= n2->num;
	n1->num -= n2->exp;
	number_format(n1);
}
