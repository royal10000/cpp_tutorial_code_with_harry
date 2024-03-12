// create 2 classes
// 1. simple calculator - Takes  input of 2 numbers using  a utility function and performs +, -, *, / and display the result using another function
// 2. scientific calculator - takes input of 2 numbers using  a uitility function  and performs any four scientific  operation of your choice and display the result

//  create another  class hybridCalculator   and inherit it using these  2 classes
// 1. what type of inheritance are you using
// 2. which mode of inheritance are you using
// 3. create an object of hybridCalculator and display result of simple and scientific calculator
// 4. How is code implemented

#include <iostream>
#include <math.h>
using namespace std;

class simpleCalculator
{
    int num1, num2;
    char opt;

public:
    void setData(int x, int y, char op)
    {
        num1 = x;
        num2 = y;
        opt = op;
    }
    void getData()
    {
        switch (opt)
        {
        case '+':
            cout << "The sum of two number is : " << num1 + num2 << endl;
            break;
        case '-':
            cout << "The difference of two number is : " << num2 - num1 << endl;
            break;
        case '*':
            cout << "The multiplication of two number is : " << num2 * num1 << endl;
            break;
        case '/':
            cout << "The division of two number is : " << num2 / num1 << endl;
            break;
        default:
            cout << "something is wrong in your code";
            break;
        }
    }
};

class ScientificCalculator
{
   

public:
    void sqre(float x)
    {
        cout <<" The sqre of "<<x<<" is "<< sqrt(x);
    }
    void power(int num,int exp){
        cout<<" the power of "<<num << " and "<<exp<<" is "<<pow(num,exp);
    }

    void sins(int n){
        cout<<" The value of sin"<<n<<" is "<<sin(n);
    }
};

int main()
{
    simpleCalculator s1;
    s1.setData(3, 4, '+');
    s1.getData();
    s1.setData(1, 4, '-');
    s1.getData();
    s1.setData(3, 4, '*');
    s1.getData();
    s1.setData(2, 4, '/');
    s1.getData();

    ScientificCalculator c1;
    c1.sqre(9);
    c1.power(3,4);
    c1.sins(45);
    // c1.setCalculate(3,"sqrt");
    // c1.getCalc();
    return 0;
}