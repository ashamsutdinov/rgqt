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


#define MESSAGE_PREFIX  0xFF

struct RGQTNETWORK PublicMessageHeader
{
    byte    Prefix;
    byte    ProtocolVersion;
    flags   Flags;
    byte    Reserved;
};

typedef PublicMessageHeader*                    _PPublicMessageHeader;
typedef std::unique_ptr<PublicMessageHeader>    PPublicMessageHeader;


extern RGQTNETWORK PublicMessageHeader gEmptyPublicMessageHeader;


#endif // PUBLICMESSAGEHEADER_H
