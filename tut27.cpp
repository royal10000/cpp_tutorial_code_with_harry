#include <iostream>
using namespace std;

class c2;
class c1
{
    int val;

    friend void exchange(c1&, c2&);

public:
    void indata(int a)
    {
        val = a;
    }

    void display()
    {
        cout << val << endl;
    }
};

class c2
{
    int val1;
    friend void exchange(c1&, c2&);

public:
    void indata(int a)
    {
        val1 = a;
    }

    void display()
    {
        cout << val1 << endl;
    }
};

void exchange(c1 &a, c2 &b)
{
    int temp = a.val;
    a.val = b.val1;
    b.val1 = temp;
}
int main()
{
    c1 o1;
    c2 o2;
    o1.indata(2);
    o2.indata(3);
    exchange(o1, o2);
    o1.display();
    o2.display();
    return 0;
}