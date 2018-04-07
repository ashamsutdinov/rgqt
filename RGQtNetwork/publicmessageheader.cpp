#include "publicmessageheader.h"


PublicMessageHeader gEmptyPublicMessageHeader ={
    MESSAGE_PREFIX,
    PROTOCOL_VERSION,
    BYTE_ZERO,
    BYTE_ZERO
};


/*

    bool isAppMessage() const;
    bool isSessionMessage() const;
    bool isHeaderEncrypted() const;
    bool isPayloadEncrypted() const;
    bool isPayloadCompressed() const;
 * */
