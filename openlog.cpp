#include "pxt.h"

#if MICROBIT_CODAL
#define BUFFER_TYPE uint8_t*
#else
#define BUFFER_TYPE char*
#endif

namespace Qwiic_Openlog {
    //%
    int i2cWriteBuffer(int address, Buffer buf, bool repeat = false)
    {
      return uBit.i2c.write(address << 1, (BUFFER_TYPE)buf->data, buf->length, repeat);
    }    
}
