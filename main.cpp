//திருச்சிற்றம்பலம் 
#include <stdio.h>
#include <stdlib.h>

struct CPU 
{
    using Byte = unsigned char;
    using Word = unsigned short;

    Word PC;      //program counter
    Word SP;      //stack pointer
    Byte A, X, Y; //registers
};

int main()
{
    return 0;
}

