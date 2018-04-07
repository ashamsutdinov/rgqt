#ifndef RGQTCORE_GLOBAL_H
#define RGQTCORE_GLOBAL_H

/*
 * RGQt Core global header
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

#if defined(RGQTCORE_LIBRARY)
#  define RGQTCORE  Q_DECL_EXPORT
#else
#  define RGQTCORE  Q_DECL_IMPORT
#endif

#endif // RGQTCORE_GLOBAL_H
