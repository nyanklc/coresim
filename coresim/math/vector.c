#include "vector.h"

vector* vector_create(float m, float a)
{
	vector* v = (vector*)malloc(sizeof(vector));
	if (!v)
		return NULL;

	v->angle = a;
	v->magnitude = m;
	
	return v;
}

void vector_destroy(vector* v)
{
	if (v)
		free(v);
}