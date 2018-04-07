#include "io.h"


template<typename T> void ReadObject(PBuffer data, BufferSize size, T& object)
{
    memcpy(&object, data, size);
}

template<typename T> T ReadObject(PBuffer data, BufferSize size)
{
    T result;
    ReadObject(data, size, result);
    return result;
}
