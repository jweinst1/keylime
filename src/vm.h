#ifndef VM_HEADER
#define VM_HEADER

#include <stdlib.h>

#define KEYLIME_REG_C 5

typedef enum
{
        KeyLimeType_Int,
        KeyLimeType_Bool,
        KeyLimeType_Str
} KeyLimeType;

typedef struct
{
        void* item;
        KeyLimeType type;
} KeyLimeRegister;

KeyLimeType getRegType(int index);




#endif
