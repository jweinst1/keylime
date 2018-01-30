#include "vm.h"

static KeyLimeRegister REGISTERS[KEYLIME_REG_C];

KeyLimeType getRegType(int index)
{
        return REGISTERS[index].type;
}
