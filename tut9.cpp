#include <iostream>
using namespace std;
int main()
{

    // Pointer --> Pointer is a data type that hold the address of the other data types
    // & ----> Addressing operator
    // * ----> Dereferencing operator
    int a = 3;
    int *b = &a;
    cout << *b;
}