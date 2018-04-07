#include "messagefooter.h"
#include "io.h"

MessageFooter gEmptyMessageFooter = {
    BYTE_ZERO,
    BYTE_ZERO,
    BYTE_ZERO,
    MESSAGE_SUFFIX
};


template RGQTNETWORK void ReadObject<MessageFooter>(PBuffer, BufferSize, MessageFooter&);

template RGQTNETWORK MessageFooter ReadObject<MessageFooter>(PBuffer, BufferSize);
