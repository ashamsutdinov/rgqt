#ifndef RGQTCORE_GLOBAL_H
#define RGQTCORE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RGQTCORE_LIBRARY)
#  define RGQTCORE  Q_DECL_EXPORT
#else
#  define RGQTCORE  Q_DECL_IMPORT
#endif

#endif // RGQTCORE_GLOBAL_H
