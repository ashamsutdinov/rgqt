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
 * 2018-04-07   ashamsutdinov       Read/Convert Object logics revisited
 * */


#include "rgqtnetwork_global.h"


typedef void*   PBuffer;
typedef size_t  BufferSize;
typedef char*   _byte;

#define BUFFER_START    0


const PBuffer RGQTNETWORK OffsetBuffer(const PBuffer data, BufferSize offset);

template<typename T> void RGQTNETWORK ReadObject(const PBuffer data, BufferSize objectOffset, T& object)
{
    memcpy(&object, OffsetBuffer(data, objectOffset), sizeof(T));
}

template<typename T> void RGQTNETWORK ConvertObject(const PBuffer data, BufferSize objectOffset, T*& object)
{
    object = reinterpret_cast<T*>(OffsetBuffer(data, objectOffset));
}


#endif // IO_P_H
