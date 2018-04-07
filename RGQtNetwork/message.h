#ifndef MESSAGE_H
#define MESSAGE_H

/*
 * RGQt Message definition
 *
 * Created: 2018-04-07
 * Last update: 2018-04-07 by ashamsutdinov
 *
 *
 * Revision history:
 *
 * 2018-04-07   ashamsutdinov       Initial version, message structure description
 * */


#include "rgqtnetwork_global.h"


/*
 * Message structure:
 *
 *
 * Public header (H1, 4 bytes):
 *  byte 0 (H1.0)   :   prefix (constant, 0xFF)
 *
 *  byte 1 (H1.1)   :   protocol version (0 to 255)
 *
 *  byte 2 (H1.2)   :   flags - bit mask
 *      0   :   1 = session message, 0 = application message
 *      1   :   1 = header encrypted, 0 = header not encrypted
 *      2   :   1 = payload encrypted, 0 = payload not encrypted
 *      3   :   1 = payload compressed, 0 = payload not compressed
 *      4   :   reserved
 *      5   :   reserved
 *      6   :   reserved
 *      7   :   reserved
 *
 *  byte 3 (H1.3)   :   reserved
 *
 *
 * Private header (H2, 8 to 44+ bytes, encrypted if H1.2.1 == 1)
 *  byte 0 (H2.0)           :   message type (0 to 255)
 *  bytes 1 to 2 (H2.1-2)   :   message sub-type (0 to 65536)
 *  byte 3 (H2.3)   :   flags
 *      0   :   1 = has session ID
 *      1   :   1 = has message ID
 *      2   :   1 = has reference message ID
 *      3   :   1 = has send time
 *      4   :   1 = has session time
 *      5   :   1 = partial content
 *      6   :   1 = has extra flags
 *      7   :   1 = has metadata
 *  bytes 4-8 (H2.4-7)  :   payload size
 *  [optional] next 4 bytes (H2.8-11)   :   session ID
 *  [optional] next 4 bytes (H2.12-15)  :   message ID (if H2.3.0 == 1, unique within session on sender side)
 *  [optional] next 4 bytes (H2.16-19)  :   reference message ID (if H2.3.1 == 1)
 *  [optional] next 8 bytes (H2.20-27)  :   send time (if H2.3.2 == 1, ticks)
 *  [optional] next 4 bytes (H2.28-31)  :   session time (if H2.3.3 == 1, seconds since session start)
 *  [optional] next 2 bytes (H2.32-33)  :   encryption algorythm (if H1.2.2 == 1)
 *  [optional] next 2 bytes (H2.34-35)  :   encryption flags (if H1.2.2 == 1)
 *  [optional] next 2 bytes (H2.36-37)  :   compression algorythm (if H1.2.3 == 1)
 *  [optional] next 2 bytes (H2.38-39)  :   compression flags (if H1.2.3 == 1)
 *  [optional] next 2 bytes (H2.40-41)  :   extra flags (if H1.2.7 == 1)
 *  [optional] next 2 bytes (H2.42-43)  :   metadata size (if H1.2.8 == 1, 0 to 65536)
 *  [optional] next 4 to 65536 bytes (H2.44-*)  :   metadata (if H1.2.8 == 1, min 4 max 65536 bytes)
 *
 *
 * Payload data (PL, 0 to [H2.4-7] bytes):
 *  bytes 0 to [H2.4-7] (PL)    :   payload data
 *
 *
 * Footer (FT, 4 bytes):
 *  byte 0 (FT.0)   :   payload data checksum
 *  byte 1 (FT.1)   :   reserved
 *  byte 2 (FT.2)   :   reserved
 *  byte 3 (FT.3)   :   end-of-message suffix (constant, 0x00)
 *
 * */

#include "messageheader.h"


#endif // MESSAGE_H