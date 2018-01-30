#ifndef VM_HEADER
#define VM_HEADER

#include <stdlib.h>

#define KEYLIME_REG 5

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

char chAdd(char a, char b);




#endif
