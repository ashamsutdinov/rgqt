#ifndef RGQTCORE_H
#define RGQTCORE_H

#include <QString>
#include <QDebug>
#include <QtMath>
#include <math.h>
#include <memory>

using namespace  std;


#define DECLARE(Class) \
    class Class; \
    class Class##Private;


#define DECLARE_PRIVATE(Class) \
private: \
    inline Class##Private* DPtr() const { return reinterpret_cast<Class##Private*>(_dPtr.get()); }


#define D_VAR() \
    auto dPtr = DPtr();


#define DECLARE_PUBLIC(Class) \
private: \
    inline Class* QPtr() const { return reinterpret_cast<Class*>(_qPtr); }


#define Q_VAR() \
    auto qPtr = QPtr();


#include "rgqtcore_global.h"

#endif // RGQTCORE_H
