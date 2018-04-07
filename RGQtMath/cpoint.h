#ifndef CPOINT_H
#define CPOINT_H

/*
 * RGQt CPoint definition
 *
 * Created: 2018-03-20
 * Last update: 2018-03-20 by ashamsutdinov
 *
 *
 * Revision history:
 *
 * 2018-03-20   ashamsutdinov       Initial version
 * */


#include "rgnumeric.h"


template<typename T> class RGQTMATH _CPoint :
        public RGNumeric
{
private:
    T c1_;
    T c2_;
    T c3_;
    T norm_;
    bool isValid_;

public:
    explicit _CPoint(const T& c1, const T& c2, const T& c3)
    {
        Build(c1, c2, c3, *this);
    }

    explicit _CPoint(const _CPoint& val)
    {
        if (this == &val)
        {
            return;
        }
        isValid_ = val.isValid_;
        if (!isValid_)
        {
            return;
        }
        c1_ = val.c1_;
        c2_ = val.c2_;
        c3_ = val.c3_;
        norm_ = val.norm_;
    }

public:
    _CPoint<T> Opposite()
    {
        return _CPoint<T>(-c1_, -c2_, -c3_);
    }

public:
    const T& C1() const
    {
        return c1_;
    }

    const T& C2() const
    {
        return c2_;
    }

    const T& C3() const
    {
        return c3_;
    }

    const T& Norm() const
    {
        return norm_;
    }

    const bool IsValid() const
    {
        return isValid_;
    }

public:
    virtual QString ToString() override
    {
        return QString("(%1 %2 %3)").arg(c1_, c2_, c3_);
    }

public:
    static T Norm(const T& c1, const T& c2, const T& c3)
    {
        auto sum = c1 * c1 + c2 * c2 + c3 * c3;
        return sqrt(sum);
    }

    static void Build(const T& c1, const T& c2, const T& c3, _CPoint<T>& val)
    {
        auto norm = Norm(c1, c2, c3);
        if (norm > 0)
        {
            val.c1_ = c1 / norm;
            val.c2_ = c2 / norm;
            val.c3_ = c3 / norm;
            val.norm_ = norm;
            val.isValid_ = true;
        }
        else
        {
            val.isValid_ = false;
        }
    }

    static _CPoint<T> Build(const T& c1, const T& c2, const T& c3)
    {
        _CPoint<T> val;
        Build(c1, c2, c3, val);
        return val;
    }
};

typedef _CPoint<double> CPoint;


#endif // CPOINT_H
