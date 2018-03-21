#ifndef RGQTLOG_H
#define RGQTLOG_H

#include "rgqtlog_global.h"


enum RGQTLOG LogSeverity
{
    TRACE,
    DEBUG,
    INFO,
    WARNING,
    ERROR
};


class RGQTLOG RGQtLog
{
protected:
    RGQtLog();
};


#endif // RGQTLOG_H
