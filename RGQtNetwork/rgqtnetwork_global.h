#ifndef RGQTNETWORK_GLOBAL_H
#define RGQTNETWORK_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RGQTNETWORK_LIBRARY)
#  define RGQTNETWORK Q_DECL_EXPORT
#else
#  define RGQTNETWORK Q_DECL_IMPORT
#endif

#include <rgqtcore.h>

#endif // RGQTNETWORK_GLOBAL_H
