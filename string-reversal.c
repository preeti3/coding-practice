//segfaulting; fix

#include <stdio.h>

void CharSwap(char * a, char * b)
{
    char * temp;
    *temp = *a;
    *a = *b;
    *b = *temp;
    //printf("no segfault in swap\n");
}
int StringRev ( char * inputStr)
{
    char *frontPtr, *endPtr;
    frontPtr = inputStr;
    endPtr = inputStr;
    int strLength = 0;
    int ctrI;
    while(inputStr[strLength] != '\0')
    {
        endPtr++;
        strLength++;
    }
    endPtr--;
    //printf("no segfault1\n");    
    for(ctrI = 0; ctrI < (strLength/2); ctrI++)
    {
        printf("counter: %d\n", ctrI);
        CharSwap(frontPtr, endPtr);
        frontPtr++;
        endPtr--;
    }
    return 0;
}

void main()
{
    char input[] = "preeti";
    StringRev(input);
    printf("%s\n", input);
    //printf("no end segfault\n");
}

