#include "rgqtcomponent.h"


RGQtComponentPrivate::RGQtComponentPrivate(const QString &name, RGQtComponent *pComponent):
    RGQtObjectPrivate(pComponent),
    _name(name)
{

}

const QString& RGQtComponentPrivate::Name() const
{
    return _name;
}



RGQtComponent::RGQtComponent(RGQtComponentPrivate* pimpl, QObject* parent) :
    RGQtObject(pimpl, parent)
{

}

RGQtComponent::RGQtComponent(const QString& name, QObject* parent) :
    RGQtObject(new RGQtComponentPrivate(name, this), parent)
{

}

const QString& RGQtComponent::Name() const
{
    D_VAR()
    return dPtr->Name();
}
