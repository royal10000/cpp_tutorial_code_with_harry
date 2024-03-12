#include <iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int sumComplex(Complex, Complex);
    int sumRealCommplex(Complex, Complex);
};

class Complex
{
    int a, b;

    // Individual  declaring function as friend
    // friend int Calculator::sumComplex(Complex o1, Complex o2);
    // friend int Calculator::sumRealCommplex(Complex o1, Complex o2);

    // Aliter : Declaring the entire calculator class as friend

    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << a << " + " << b << "i" << endl;
    }
};

int Calculator::sumComplex(Complex o1, Complex o2)
{
    // int a = o1.a + o2.a;
    // int b = o1.b + o2.b;
    // return ;

    return (o1.a + o2.a);
}

int Calculator::sumRealCommplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex c1, c2;
    c1.setNumber(5, 6);
    c1.printNumber();
    c2.setNumber(3, 5);
    c2.printNumber();

    Calculator ca1;
    int sum = ca1.sumComplex(c1, c2);
    cout << "The sum of " << sum << endl;
    int sums = ca1.sumRealCommplex(c1, c2);
    cout << "The sum of " << sums << endl;

    return 0;
}