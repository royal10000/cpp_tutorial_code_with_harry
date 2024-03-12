#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // creating a constructor
    // constructor  is a special member function with same name  as of the  class.
    // it is automatically invoked
    // It is used to initialize the objects of its class
    Complex(); // initalizing the constructor''
    void printData()
    {
       
        cout << "The value of a and b is " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex() //-->>Default constructor
{
    a = 10;
    b = 0;
    cout<<"hello world"<<endl;
}

int main()
{
    Complex c1,c2,c3;
    c1.printData();
    c2.printData();
    c3.printData();
    return 0;
}


//  Characterstic of constructors
// 1.It should be declared in the public section 
// 2.The are automatically invoked whenever  the object is created
// 3.They cannot return values and Do not have return types
// 4.It can have default arguments
// 5.We cannot refer to their address
