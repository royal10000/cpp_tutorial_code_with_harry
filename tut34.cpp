// Inheritance in c++
// Type of inheritance:
// i. Single inheritance
// ii. Multiple inhertance
// iii. Hierarchical inheritance
// iv. Multi-level Inheritance
// v. Hybrid Inheritance
#include <iostream>
using namespace std;
class Employee
{

public:
    int id;
    float salary;
    Employee(){};
    Employee(int );
};



Employee::Employee(int inpId)
{
    id = inpId;
    salary = 2322.21;
    // cout << "hello world" << endl;
}

// syntax of derive classs
// class {{derive-class-name}}:{{visibility-mode}} {{base-class-name}}{
//     class member/method ....
// }

// creating a programmer class derive from employee base class
class Programmer:public Employee{
    public:
    int languageCode=1;
    Programmer();
    Programmer(int pid){
        id=pid;
    };
};

int main()
{
    Employee rohan(1), hari(2);
    cout<<rohan.salary<<endl;
    cout<<hari.salary<<endl;
    Programmer p1(3);
    cout<<p1.languageCode<<endl;
    return 0;
}