#ifndef MESSAGESUBTYPES_H
#define MESSAGESUBTYPES_H

/*
 * RGQt Message Subtypes definition
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


enum RGQTNETWORK RequestResponseSubtype :
        byte
{
    Request     = 0,
    Response    = 1
};


enum RGQTNETWORK DataSubtype :
        byte
{
    Binary          = 0,
    Document        = 1,
    Text            = 2,
    Picture         = 3,
    AnimatedPicture = 4,
    Video           = 5,
    VideoFrame      = 6,
    Audio           = 7
}


#endif // MESSAGESUBTYPES_H
