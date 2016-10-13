#include <stdio.h>

int CountBits(int inputNum)
{
    int bitCount = 0;
    int tempVal = inputNum;
    while(tempVal)
    {
        if(tempVal & 0x01 == 1)
            bitCount++;
        tempVal = tempVal >> 1;
    }
    return bitCount;
}

int main()
{
    int testInput = 20;
    printf("%d\n", CountBits(testInput));
}
