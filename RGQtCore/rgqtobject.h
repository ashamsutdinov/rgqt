#ifndef RGQTOBJECT_H
#define RGQTOBJECT_H

/*
 * RGQt Object definition
 *
 * Created: 2018-03-20
 * Last update: 2018-03-20 by ashamsutdinov
 *
 *
 * Revision history:
 *
 * 2018-03-20   ashamsutdinov       Initial version
 * */


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
