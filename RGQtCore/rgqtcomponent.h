#ifndef RGQTCOMPONENT_H
#define RGQTCOMPONENT_H

#include "rgqtobject.h"


enum RGQTCORE ComponentState :
        int64_t
{

};


DECLARE(RGQtComponent)

class RGQTCORE RGQtComponentPrivate :
        public RGQtObjectPrivate
{
    DECLARE_PUBLIC(RGQtComponent)

private:
    QString _name;

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
