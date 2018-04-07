#ifndef PIMPL_DEFS_H
#define PIMPL_DEFS_H

/*
 * RGQt PIMPL (Private Implementaion) defines
 *
 * Created: 2018-04-07
 * Last update: 2018-04-07 by ashamsutdinov
 *
 *
 * Revision history:
 *
 * 2018-04-07   ashamsutdinov       Initial version
 * */


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


#endif // PIMPL_DEFS_H
