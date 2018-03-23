#ifndef RGQTCOMPONENT_H
#define RGQTCOMPONENT_H

#include "rgqtobject.h"


enum RGQTCORE ComponentState :
        FLAGS
{
    Undefined   = BIT_ZERO,
    Ready       = BIT_0,
    Starting    = BIT_1,
    Started     = BIT_2,
    Pausing     = BIT_3,
    Paused      = BIT_4,
    Stopping    = BIT_5,
    Stopped     = BIT_6,
    Recovering  = BIT_7,
    Recovered   = BIT_8,
    Locked      = BIT_9,
    Failed      = BIT_10
};


DECLARE(RGQtComponent)

class RGQTCORE RGQtComponentPrivate :
        public RGQtObjectPrivate
{
    DECLARE_PUBLIC(RGQtComponent)

private:
    QString _name;
    FLAGS   _state;

public:
    explicit RGQtComponentPrivate(const QString& name, RGQtComponent* pComponent);

public:
    const QString& Name() const;
};


class RGQTCORE RGQtComponent :
        public RGQtObject
{
    Q_OBJECT
    DECLARE_PRIVATE(RGQtComponent)

public:
    explicit RGQtComponent(RGQtComponentPrivate* pimpl, QObject* parent);
    explicit RGQtComponent(const QString& name, QObject* parent);


public:
    const QString& Name() const;
};

#endif // RGQTCOMPONENT_H
