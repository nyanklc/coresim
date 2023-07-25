#include "electron.h"

electron* electron_create(number* x, number* y, number* rad, number* c)
{
	electron* e = (electron*)malloc(sizeof(electron));
	if (!e)
		return NULL;

	e->position_x = *x;
	e->position_y = *y;
	e->radius = *rad;
	e->charge = *c;

	return e;
}

void electron_destroy(electron* e)
{
	if (e)
		free(e);
}