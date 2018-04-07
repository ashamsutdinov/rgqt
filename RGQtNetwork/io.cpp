#include "io.h"

const PBuffer RGQTNETWORK OffsetBuffer(const PBuffer data, BufferSize offset)
{
    return reinterpret_cast<PBuffer>((reinterpret_cast<_byte>(data) + offset));
}
