#ifndef MESSAGEFOOTER_H
#define MESSAGEFOOTER_H

/*
 * RGQt Message footer definition
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


#define MESSAGE_SUFFIX  0x00

struct RGQTNETWORK MessageFooter
{
    byte    Checksum;
    byte    Reserved1;
    byte    Reserved2;
    byte    Suffix;
};

typedef MessageFooter*                  _PMessageFooter;
typedef std::unique_ptr<MessageFooter>  PMessageFooter;


extern RGQTNETWORK MessageFooter gEmptyMessageFooter;


#endif // MESSAGEFOOTER_H
