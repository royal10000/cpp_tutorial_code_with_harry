#include <iostream>
using namespace std;
class Employee
{
    int id, salary;

public:
    void setId()
    {
        salary=122;
        cout << "Enter a id ";
        cin >> id;
    }
    void getId()
    {
        cout << "The id of this employee is " << id << endl;
    }
};
int main()
{
    // Employee harry,rohan,thuman,gita;
    // harry.setId();
    // harry.getId();
    // rohan.setId();
    // thuman.setId();
    // gita.setId();

    Employee Ep[4];
    for (int i = 0; i < 4; i++)
    {   
        Ep[i].setId();
        Ep[i].getId();
        /* code */

    }
       
    return 0;
}