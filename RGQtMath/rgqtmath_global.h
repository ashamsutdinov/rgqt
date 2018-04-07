#ifndef RGQTMATH_GLOBAL_H
#define RGQTMATH_GLOBAL_H

/*
 * RGQt Math global header
 *
 * Created: 2018-03-20
 * Last update: 2018-03-20 by ashamsutdinov
 *
 *
 * Revision history:
 *
 * 2018-03-20   ashamsutdinov       Initial version
 * */


#include <QtCore/qglobal.h>

#if defined(RGQTMATH_LIBRARY)
#  define RGQTMATH  Q_DECL_EXPORT
#else
#  define RGQTMATH  Q_DECL_IMPORT
#endif

#include <rgqtcore.h>

#endif // RGQTMATH_GLOBAL_H
