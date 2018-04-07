#ifndef RGQTNETWORK_GLOBAL_H
#define RGQTNETWORK_GLOBAL_H

/*
 * RGQt Network global header
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

#if defined(RGQTNETWORK_LIBRARY)
#  define RGQTNETWORK Q_DECL_EXPORT
#else
#  define RGQTNETWORK Q_DECL_IMPORT
#endif

#include <rgqtcore.h>

#endif // RGQTNETWORK_GLOBAL_H
