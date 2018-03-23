#ifndef RGQTOBJECT_H
#define RGQTOBJECT_H

#include "rgqtcore.h"


DECLARE(RGQtObject)


class RGQtObjectPrivate
{
    DECLARE_PUBLIC(RGQtObject)

protected:
    RGQtObject* _qPtr;

public:
    explicit RGQtObjectPrivate(RGQtObject* obj);
};


class RGQTCORE RGQtObject :
        public QObject
{
    Q_OBJECT
    DECLARE_PRIVATE(RGQtObject)

protected:
    unique_ptr<RGQtObjectPrivate> _dPtr;

public:
    explicit RGQtObject(RGQtObjectPrivate* pimpl, QObject* parent);
    virtual ~RGQtObject();
};


#endif // RGQTOBJECT_H
