#include <iostream>
#include <stdlib.h>

using namespace std;

int bin_to_int(int binary_digits[], int number_of_digits)
{
    int multiplier = 1;
    int num = 0;
    int endPTR = number_of_digits -1;

    while(endPTR>=0)
    {
        num += binary_digits[endPTR] * multiplier;
        multiplier = multiplier *2;
        endPTR = endPTR -1;
    }

    return num;
}