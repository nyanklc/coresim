#ifndef CORESIM_MATH_VECTOR_H
#define CORESIM_MATH_VECTOR_H

#include <stdlib.h>

typedef struct vector
{
	float magnitude;
	float angle; // angle from x axis
} vector;

vector* vector_create(float m, float a);
void vector_destroy(vector *v);

#endif