#include "publicmessageheader.h"

PublicMessageHeader gEmptyPublicMessageHeader ={
    MESSAGE_PREFIX,
    PROTOCOL_VERSION,
    BYTE_ZERO,
    BYTE_ZERO
};

void RGQTNETWORK ReadPublicMessageHeader(const PBuffer buffer, BufferSize publicHeaderOffset, PublicMessageHeader& publicHeader)
{
    ReadObject(buffer, publicHeaderOffset, publicHeader);
}

void RGQTNETWORK ReadPublicMessageHeader(const PBuffer buffer, PublicMessageHeader& publicHeader)
{
    ReadPublicMessageHeader(buffer, BUFFER_START, publicHeader);
}

void RGQTNETWORK ConvertPublicMessageHeader(const PBuffer buffer, BufferSize publicHeaderOffset, PublicMessageHeader*& publicHeader)
{
    ConvertObject(buffer, publicHeaderOffset, publicHeader);
}

void RGQTNETWORK ConvertPublicMessageHeader(const PBuffer buffer, PublicMessageHeader*& publicHeader)
{
    ConvertPublicMessageHeader(buffer, BUFFER_START, publicHeader);
}
