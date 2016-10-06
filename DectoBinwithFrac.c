#include <stdio.h>

int main()
{
    int binInteg = 0;
    int binFrac = 0;
    double input = 3.72;
    int integral = (int)input;
    double fractional = input - (double)integral;
    int precision = 0;
    while (integral)
    {
        printf("integ loop%d\n",integral);
        binInteg *= 10;
        binInteg += integral & 0x1;
        integral = integral>> 1;
    }
    while (precision < 4 && (fractional))
    {
        binFrac *=10;
        fractional*=2;
        binFrac += (int)(fractional);
        fractional = fractional - (int)fractional;
        precision++;
    }
    
    printf("%d.%d\n", binInteg, binFrac);
}

