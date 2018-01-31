#include "vm.h"

static KeyLimeRegister REGISTERS[KEYLIME_REG_C];

KeyLimeType KeyLime_getRegType(int index)
{
        return REGISTERS[index % KEYLIME_REG_C].type;
}

void KeyLime_setReg(int index, void* ptr)
{
        REGISTERS[index % KEYLIME_REG_C].item = ptr;
}

void* KeyLime_getReg(int index)
{
        return REGISTERS[index % KEYLIME_REG_C].item;
}

void KeyLime_newInt(int index, int value)
{
        free(REGISTERS[index % KEYLIME_REG_C].item);
        REGISTERS[index % KEYLIME_REG_C].type = KeyLimeType_Int;
        REGISTERS[index % KEYLIME_REG_C].item = malloc(sizeof(int));
        *(int*)(REGISTERS[index % KEYLIME_REG_C].item) = value;
}
