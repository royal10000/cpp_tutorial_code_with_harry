#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;
    // Count is the static data member of class employee

public:
    void setData()
    {
        cin >> id;
        count++;
    };

    void getData()
    {
        cout << id << " employee count " << count << endl;
    }

    static void getCount()
    {
        // static function is used to access static function and variable
        // cout<<id;  //Throws an arrow 
        cout<<"The value of count is "<<count<<endl;
    }
};

int Employee:: count;   //Default value is 1;
// int Employee::count = 1000;
int main()
{
    Employee shyam, hari, gita;
    shyam.setData();
    shyam.getData();
    Employee::getCount();

    hari.setData();
    hari.getData();
    Employee::getCount();

    gita.setData();
    gita.getData();
    Employee::getCount();
    return 0;
}