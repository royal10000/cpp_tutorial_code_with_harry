#include <iostream>
using namespace std;
class y;
class x
{
    int data;
    friend void add(x, y);

public:
    void setValue(int value)
    {
        data = value;
    }
};
class y
{
    int num;
    friend void add(x, y);

public:
    void setValue(int value)
    {
        num = value;
    }
};

void add(x o1, y o2)
{
    cout << "summing datas of x and y objects gives me " << o1.data + o2.num;
}
int main()
{
    x a;
    y b;
    a.setValue(1);
    b.setValue(3);
    add(a, b);
    return 0;
}