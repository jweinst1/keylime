#ifndef VM_HEADER
#define VM_HEADER

#include <stdlib.h>

#define KEYLIME_REG_C 5

typedef enum
{
        KeyLimeType_Null,
        KeyLimeType_Int,
        KeyLimeType_Bool,
        KeyLimeType_Str
} KeyLimeType;

typedef struct
{
        void* item;
        KeyLimeType type;
} KeyLimeRegister;

KeyLimeType KeyLime_getRegType(int index);

void KeyLime_setReg(int index, void* ptr);

// Gets void pointer of register.
void* KeyLime_getReg(int index);

// Creates a new int in some register, frees old value.
void KeyLime_newInt(int index, int value);




#endif
