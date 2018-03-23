#include "rgqtobject.h"

RGQtObjectPrivate::RGQtObjectPrivate(RGQtObject* obj) :
    _qPtr(obj)
{

}


RGQtObject::RGQtObject(RGQtObjectPrivate* pimpl, QObject* parent) :
    QObject(parent),
    _dPtr(pimpl)
{

}

RGQtObject::~RGQtObject()
{

}
