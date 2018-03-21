#ifndef RGQTLOG_GLOBAL_H
#define RGQTLOG_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RGQTLOG_LIBRARY)
#  define RGQTLOG   Q_DECL_EXPORT
#else
#  define RGQTLOG   Q_DECL_IMPORT
#endif

#include <rgqtcore.h>

#endif // RGQTLOG_GLOBAL_H
