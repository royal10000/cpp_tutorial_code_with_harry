// ---------- Object oriented programming --------------
#include <iostream>
using namespace std;
class Employee
{
private:
    int a, b;

public:
    int c, d, e;
    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << "a " << a << endl;
        cout << " b " << b << endl;
        cout << "c " << c << endl;
        cout << "d " << d << endl;
        cout << "e is " << e << endl;
    }
};
 

void Employee::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Employee thuman;
    thuman.d=2;
    thuman.e=3;
    thuman.setData(3, 4, 2);
    thuman.getData();
    return 0;
}
