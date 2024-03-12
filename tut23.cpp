// Friend functions
/*
    properties of friend functions

    1.not in the scope of class
    2. since it is not in the scope of the class, it cannot from the objectof that class. c1.sumComplex() == invalid
    3 can be invoked without the help of any object
    4. Usually contains the objects as arguments.
    5. Can be declared inside public or private section of the class
    6. it cannot access the members directly by their names and need object_name.member_name to access any member.
*/
#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // Below line means that non-member functions-> sumComplex function is allowed to do anything with my private meber
    friend Complex sumComplex(Complex o1, Complex o2);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 2);
    c1.printNumber();

    c2.setNumber(5, 7);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}