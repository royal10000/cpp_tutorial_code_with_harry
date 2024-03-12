#include <iostream>
using namespace std;
/*
 class B: public A{

 }
*/
class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 cass constructor called" << endl;
    }
    void printData1()
    {
        cout << "The value of data is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }
    void printData2()
    {
        cout << "The value of data is " << data2 << endl;
    }
};

class Derive:public Base1,public Base2{
    int derive1,derive2;
    public:
    Derive(int a,int b,int c,int d):Base1(a),Base2(b){
        derive1=c;
        derive2=d;
        cout<<"Derive class contructor called"<<endl;
    }

    void printData(){
        cout<<"The value of derive1 is "<<derive1<<endl;
        cout<<"The value of derive2 is "<<derive2<<endl;
    }
};

int main()
{
    // Base1 a1(1);
    // a1.printData();

    // Base2 a2(20);
    // a2.printData();

    Derive d(10,10,21,214);
    d.printData();
    return 0;
}