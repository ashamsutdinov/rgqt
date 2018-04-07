#ifndef RGNUMERIC_H
#define RGNUMERIC_H

/*
 * RGQt RGNumeric definition
 *
 * Created: 2018-03-20
 * Last update: 2018-03-20 by ashamsutdinov
 *
 *
 * Revision history:
 *
 * 2018-03-20   ashamsutdinov       Initial version
 * */


#include "rgqtmath_global.h"


class RGQTMATH RGNumeric
{
public:
    virtual QString ToString() = 0;
};

#endif // RGNUMERIC_H
