#ifndef MESSAGEHEADER_H
#define MESSAGEHEADER_H

/*
 * RGQt Message header definition
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

#include "publicmessageheader.h"
#include "privatemessageheader.h"



struct RGQTNETWORK MessageHeader
{
    PublicMessageHeader     Public;
    PrivateMessageHeader    Private;
};



#endif // MESSAGEHEADER_H
