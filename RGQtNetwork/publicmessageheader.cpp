#include "publicmessageheader.h"
#include "io.h"


PublicMessageHeader gEmptyPublicMessageHeader ={
    MESSAGE_PREFIX,
    PROTOCOL_VERSION,
    BYTE_ZERO,
    BYTE_ZERO
};


template RGQTNETWORK void ReadObject<PublicMessageHeader>(PBuffer, BufferSize, PublicMessageHeader&);

template RGQTNETWORK PublicMessageHeader ReadObject<PublicMessageHeader>(PBuffer, BufferSize);
