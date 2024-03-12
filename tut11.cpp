// Structure and Union

// ***************** Structure ***********************
#include <iostream>
using namespace std;
struct employee
{
    int empId;
    char favChar;
    float salary;
};

union student
{
    /* data */
    int rice;
    char car;
    float pound;
};

int main()
{
    struct employee Harry;
    struct employee Ram;
    struct employee Thaman;
    Harry.empId = 1;
    Harry.favChar = 'C';
    Harry.salary = 124.56;

    Ram.empId = 2;
    Ram.favChar = 'e';
    Ram.salary = 3467.31;

    Thaman.empId = 3;
    Thaman.favChar = 's';
    Thaman.salary = 2124.3532;

    cout << "Employee_Id of Harry is " << Harry.empId << endl;
    cout << "salary of Harry is " << Harry.salary << endl;
    cout << "favourite of Harry is " << Harry.favChar << endl;

    cout << "Employee_Id of Ram is " << Ram.empId << endl;
    cout << "salary of Ram is " << Ram.salary << endl;
    cout << "favourite of Ram is " << Ram.favChar << endl;

    cout << "Employee_Id of Thaman is " << Thaman.empId << endl;
    cout << "salary of Thaman is " << Thaman.salary << endl;
    cout << "favourite of Thaman is " << Thaman.favChar << endl;

    union student s1;
    s1.rice = 1;
    // s1.pound = 345.342;
    // s1.car = 'd';
    // cout << "rice of s1 is " << s1.rice << endl;
    // cout << "car of s1 is " << s1.car << endl;
    // cout << "pound of s1 is " << s1.pound << endl;
    cout << s1.rice<<endl;

    enum meal{breakfast,lunch,dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

        return 0;
}