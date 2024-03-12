#include <iostream>
using namespace std;
class Base
{
    int data1;

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base::setData()
{
    data1 = 3;
    data2 = 4;
}

int Base::getData1()
{
    return data1;
}

int Base::getData2()
{
    return data2;
}

class Derive : public Base
{

    int data3;

public:
    void process();
    void display();
};

void Derive::process()
{
    data3 = data2 * getData1();
}

void Derive::display(){
    cout<<"value of data1 "<<getData1()<<endl;
    cout<<"value of data2 "<<data2<<endl;
    cout<<"value of data3 "<<data3;
}
int main()
{

    Derive d;
    d.setData();
    d.process();
    d.display();
    return 0;
}