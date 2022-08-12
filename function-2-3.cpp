#include <iostream>
#include <stdlib.h>

using namespace std;

int palindrome_sum(int integers[], int length);
bool is_array_palindrome(int integers[], int length);
int sum_integers(int integers[], int length);

int palindrome_sum(int integers[], int length)
{
    if(is_array_palindrome(integers, length) != true)
    {
        return -2;
    }
    else if (length<=0)
    {
        return -1;
    }
    
    int sum = sum_integers(integers, length);
    return sum; 

}

bool is_array_palindrome(int integers[], int length)
{
    int endPTR = length-1;
    for(int i=0; i<length; i++)
    {
        if(integers[i] != integers[endPTR])
        {
            return false;
        }
        endPTR = endPTR -1;    
    }
    return true;

}

int sum_integers(int integers[], int length)
{
    int sum = 0;
    for(int i=0; i<length; i++)
    {
        sum = sum + integers[i];
    }
    return sum;
}
