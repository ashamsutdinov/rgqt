#ifndef PUBLICMESSAGEHEADER_H
#define PUBLICMESSAGEHEADER_H

/*
 * RGQt Public Message Header definition
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
#include "protocolversion.h"
#include "io.h"


#define MESSAGE_PREFIX  0xFF

#define APP_MESSAGE_FLAG        BIT_0
#define HEADER_ENCRYPTED_FLAG   BIT_1
#define PAYLOAD_ENCRYPTED_FLAG  BIT_2
#define PAYLOAD_COMPRESSED_FLAG BIT_3


struct RGQTNETWORK PublicMessageHeader
{
    byte    Prefix;

    byte    ProtocolVersion;

    OBJECT_FLAGS(Flags)

    byte    Reserved;

    bool isAppMessage() const { return hasFlag(APP_MESSAGE_FLAG); }
    bool isSessionMessage() const { return !isAppMessage(); }
    bool isHeaderEncrypted() const { return hasFlag(HEADER_ENCRYPTED_FLAG); }
    bool isPayloadEncrypted() const { return hasFlag(PAYLOAD_ENCRYPTED_FLAG); }
    bool isPayloadCompressed() const { return hasFlag(PAYLOAD_COMPRESSED_FLAG); }
};


typedef PublicMessageHeader*                    PPublicMessageHeader;


extern RGQTNETWORK PublicMessageHeader gEmptyPublicMessageHeader;


void RGQTNETWORK ReadPublicMessageHeader(const PBuffer buffer, BufferSize publicHeaderOffset, PublicMessageHeader& publicHeader);
void RGQTNETWORK ReadPublicMessageHeader(const PBuffer buffer, PublicMessageHeader& publicHeader);

void RGQTNETWORK ConvertPublicMessageHeader(const PBuffer buffer, BufferSize publicHeaderOffset, PublicMessageHeader*& publicHeader);
void RGQTNETWORK ConvertPublicMessageHeader(const PBuffer buffer, PublicMessageHeader*& publicHeader);


#endif // PUBLICMESSAGEHEADER_H
