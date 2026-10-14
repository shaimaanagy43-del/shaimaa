// Merging Using visual.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int Sub(int FirstNumber, int secondNumer)
{
    return FirstNumber - secondNumer;
}
int main()
{
    cout << "10-4 = " << Sub(10, 4) << '\n';
}