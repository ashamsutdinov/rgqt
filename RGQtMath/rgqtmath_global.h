#ifndef RGQTMATH_GLOBAL_H
#define RGQTMATH_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RGQTMATH_LIBRARY)
#  define RGQTMATH  Q_DECL_EXPORT
#else
#  define RGQTMATH  Q_DECL_IMPORT
#endif

#include <rgqtcore.h>

#endif // RGQTMATH_GLOBAL_H
