/*
 ••• E2.13
 Write a program that reads a number between 1,000 and 999,999 from the user, where the user enters a comma in the input. Then print the number without a comma. Here is a sample dialog; the user input is in color:
 
 Please enter an integer between 1,000 and 999,999: 23,456
 23456
 Hint: Read the input as a string. Measure the length of the string. Suppose it contains n characters. Then extract substrings consisting of the first n – 4 characters and the last three characters.
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Please enter an integer between 1,000 and 999,999: ";
    string number;
    cin >> number;
    
    int n = number.length();
    
    cout << number.substr(0, n - 4) << number.substr(n - 3, n) << endl;
    
    
}
