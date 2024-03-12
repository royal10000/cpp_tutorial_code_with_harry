// Inline function , Default argument & Contant arguments


// Inline function
// Note: Don't use inline function in recursion
// Don't use this function in static function


#include <iostream>
using namespace std;
inline int sum(int a = 12, int b = 32)
{
    return a + b;
}
int main()
{
    int a, b;
    cout << sum(2,6); 
    cout << sum(); 
    cout << sum(); 
    cout << sum(); 
    cout << sum(); 
    cout << sum(); 
    cout << sum(); 
    return 0;
}