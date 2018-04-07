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
#include "io.h"


#define MESSAGE_SUFFIX  0x00

struct RGQTNETWORK MessageFooter
{
    byte    Checksum;

    byte    Reserved1;

    byte    Reserved2;

    byte    Suffix;
};

typedef MessageFooter*  PMessageFooter;


extern RGQTNETWORK MessageFooter gEmptyMessageFooter;


void RGQTNETWORK ReadMessageFooter(const PBuffer buffer, BufferSize footerOffset, MessageFooter& footer);
void RGQTNETWORK ReadMessageFooter(const PBuffer buffer, MessageFooter& footer);

void RGQTNETWORK ConvertMessageFooter(const PBuffer buffer, BufferSize footerOffset, MessageFooter*& footer);
void RGQTNETWORK ConvertMessageFooter(const PBuffer buffer, MessageFooter*& footer);

#endif // MESSAGEFOOTER_H
