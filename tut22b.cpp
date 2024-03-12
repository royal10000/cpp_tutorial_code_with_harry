#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setDataByComplex(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void display()
    {
        cout << "Complex Number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex n1, n2, n3;

    n1.setData(1, 2);
    n1.display();

    n2.setData(3, 2);
    n2.display();

    n3.setDataByComplex(n1, n2);
    n3.display();

    return 0;
}