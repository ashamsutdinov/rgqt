#ifndef RGQTCORE_H
#define RGQTCORE_H

#include "rgqtcore_global.h"

#define DECLARE_CLASS(Class) \
    class Class; \
    class Class##Private;


#define PRIVATE_PTR_D(Dptr, Class) \
    protected: \
        Class##Private * Dptr;


#define PRIVATE_PTR(Class) \
    PRIVATE_PTR_D(d_ptr_, Class);


#define DECLARE_PRIVATE_D(Dptr, Class) \
  inline Class##Private * d_func() { return reinterpret_cast<Class##Private *>(Dptr); } \
  inline const Class##Private* d_func() const { return reinterpret_cast<const Class##Private *>(Dptr); } \
  friend class Class##Private;


#define DECLARE_PRIVATE(Class) \
    DECLARE_PRIVATE(d_ptr_, Class);


#define PUBLIC_PTR_Q(Qptr, Class) \
    public: \
        Class * Qptr;


#define PUBLIC_PTR(Class) \
    PUBLIC_PTR_Q(q_ptr_);


#define DECLARE_PUBLIC_Q(Qptr, Class) \
  inline Class* q_func() { return static_cast<Class *>(Qptr); } \
  inline const Class * q_func() const { return static_cast<const Class *>(Qptr); } \
  friend class Class;


#define DECLARE_PUBLIC(Class) \
    DECLARE_PUBLIC_Q(q_ptr_, Class);


#endif // RGQTCORE_H
