#include <iostream>
#include <stdlib.h>

using namespace std;

extern int palindrome_sum(int integers[], int length);
extern bool is_array_palindrome(int integers[], int length);
extern int sum_integers(int integers[], int length);


int main()
{
    int length = 0;
    cout << "How long would you like your array to be? ";
    cin >> length;
    int integers[length];
    for(int i=0; i<length; i++)
    {
        cout << "Please enter an element: ";
        cin >> integers[i];        
    }
    cout << palindrome_sum(integers, length);
}