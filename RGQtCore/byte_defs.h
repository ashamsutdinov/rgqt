#ifndef BYTE_DEFS_H
#define BYTE_DEFS_H

/*
 * RGQt Byte and Bit mask/flags defines
 *
 * Created: 2018-04-07
 * Last update: 2018-04-07 by ashamsutdinov
 *
 *
 * Revision history:
 *
 * 2018-04-07   ashamsutdinov       Initial version
 * */


typedef uint32_t    FLAGS_32;
typedef uint64_t    FLAGS_64;

typedef FLAGS_32    flags;

typedef uint8_t     BYTE_1;
typedef uint16_t    BYTE_2;
typedef uint32_t    BYTE_4;
typedef uint64_t    BYTE_8;

typedef BYTE_1      byte;
typedef BYTE_2      byte_2;
typedef BYTE_4      byte_4;
typedef BYTE_8      byte_8;


#define FLAGS_ZERO  0x00000000
#define BYTE_ZERO   0x00

#define BIT_0       0x00000001
#define BIT_1       0x00000002
#define BIT_2       0x00000004
#define BIT_3       0x00000008

#define BIT_4       0x00000010
#define BIT_5       0x00000020
#define BIT_6       0x00000040
#define BIT_7       0x00000080

#define BIT_8       0x00000100
#define BIT_9       0x00000200
#define BIT_10      0x00000400
#define BIT_11      0x00000800

#define BIT_12      0x00001000
#define BIT_13      0x00002000
#define BIT_14      0x00004000
#define BIT_15      0x00008000

#define BIT_16      0x00010000
#define BIT_17      0x00020000
#define BIT_18      0x00040000
#define BIT_19      0x00080000

#define BIT_20      0x00100000
#define BIT_21      0x00200000
#define BIT_22      0x00400000
#define BIT_23      0x00800000

#define BIT_24      0x01000000
#define BIT_25      0x02000000
#define BIT_26      0x04000000
#define BIT_27      0x08000000

#define BIT_28      0x10000000
#define BIT_29      0x20000000
#define BIT_30      0x40000000
#define BIT_31      0x80000000

#define HAS_FLAG(Flags, Flag)       ((Flags) & (Flag)) == (Flag)
#define ADD_FLAG(Flags, Flag)       (Flags) |= Flag
#define REMOVE_FLAG(Flags, Flag)    (Flags) = (((Flags) | (Flag)) ^ (Flag))

#define OBJECT_FLAGS(Flags) \
    flags Flags; \
    bool hasFlag(flags f) const { return HAS_FLAG(Flags, f); } \
    void setFlag(flags f) { ADD_FLAG(Flags, f); } \
    void removeFlag(flags f) { REMOVE_FLAG(Flags, f); }


#endif // BYTE_DEFS_H
