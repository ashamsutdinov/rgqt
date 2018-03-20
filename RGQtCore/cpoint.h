#ifndef CPOINT_H
#define CPOINT_H

#include "rgqtcore.h"


template<typename T> class CPoint
{
private:
    T c1_;
    T c2_;
    T c3_;
public:
    explicit CPoint(const T& c1, const T& c2, const T& c3):
        c1_(c1), c2_(c2), c3_(c3)
    {

    }
};


class CPoint
{
public:
    CPoint();
};

#endif // CPOINT_H
