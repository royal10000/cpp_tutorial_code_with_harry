// --------------- Function and function prototype ---------

#include <iostream>
using namespace std;

// Function Prototype: first declare the function to use it in lower portion
void g(void);

int add(int a, int b)
{
    int sum = a + b;
    // cout << sum;
    return sum;
}
int main()
{
    int a, b;
    cout << "enter a ";
    cin >> a;
    cout << "enter b ";
    cin >> b;
    int ds = add(a, b);
    cout << ds<<endl;
    g();
    return 0;
}


void g(){
    cout<<"Hello! Good Morning";
}