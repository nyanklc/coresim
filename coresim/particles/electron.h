#ifndef CORESIM_PARTICLES_ELECTRON_H
#define CORESIM_PARTICLES_ELECTRON_H

#include "../math/number.h"

typedef struct electron
{
	number position_x;
	number position_y;
	number radius;
	number charge;

} electron;

electron* electron_create(number *x, number *y, number *rad, number *c);
void electron_destroy(electron* e);

#endif