#include <iostream>
#include <stdlib.h>

using namespace std;

extern int bin_to_int(int binary_digits[], int number_of_digits);

int main()
{
    int number_of_digits;
    cout << "Please enter the number of digits: ";
    cin >> number_of_digits;
    int binary_digits[number_of_digits];
    for(int i=0; i<number_of_digits; i++)
    {
        cout << "Please enter a digit " << endl;
        cin >> binary_digits[i];
    }
    cout << "Your int is " << bin_to_int(binary_digits, number_of_digits) << endl;


}