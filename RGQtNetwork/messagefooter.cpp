#include "messagefooter.h"

MessageFooter gEmptyMessageFooter = {
    BYTE_ZERO,
    BYTE_ZERO,
    BYTE_ZERO,
    MESSAGE_SUFFIX
};


void RGQTNETWORK ReadMessageFooter(const PBuffer buffer, BufferSize footerOffset, MessageFooter& footer)
{
    ReadObject(buffer, footerOffset, footer);
}

void RGQTNETWORK ReadMessageFooter(const PBuffer buffer, MessageFooter& footer)
{
    ReadMessageFooter(buffer, BUFFER_START, footer);
}

void RGQTNETWORK ConvertMessageFooter(const PBuffer buffer, BufferSize footerOffset, MessageFooter*& footer)
{
    ConvertObject(buffer, footerOffset, footer);
}

void RGQTNETWORK ConvertMessageFooter(const PBuffer buffer, MessageFooter*& footer)
{
    ConvertMessageFooter(buffer, BUFFER_START, footer);
}
