#ifndef IO_P_H
#define IO_P_H

/*
 * RGQt Network IO helpers
 *
 * Created: 2018-04-07
 * Last update: 2018-04-07 by ashamsutdinov
 *
 *
 * Revision history:
 *
 * 2018-04-07   ashamsutdinov       Initial version
 * */


#include "rgqtnetwork_global.h"


typedef void*   PBuffer;
typedef size_t  BufferSize;


template<typename T> void RGQTNETWORK ReadObject(const PBuffer data, BufferSize size, T& object);

template<typename T> T RGQTNETWORK ReadObject(const PBuffer data, BufferSize size);


#endif // IO_P_H
