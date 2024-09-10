declare namespace Qwiic_Openlog{ 
    //% repeat.defl=0 shim=Qwiic_Openlog::i2cWriteBuffer
    export function i2cWriteBuffer(address: int32, buf: Buffer, repeat?: boolean): int32;
}  
