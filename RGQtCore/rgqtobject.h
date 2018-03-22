#ifndef RGQTOBJECT_H
#define RGQTOBJECT_H

#include "rgqtcore.h"


class RGQTCORE RGQtObject :
        public QObject
{
    Q_OBJECT

public:
    explicit RGQtObject(QObject* parent);
};

#endif // RGQTOBJECT_H
