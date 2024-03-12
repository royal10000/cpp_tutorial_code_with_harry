#include <iostream>
using namespace std;
/*
    Syntax for initialization list in constructor :
        constructor (argument-list) : initilization-section
        {
            assignment + other code;
        }

*/

class Test{
 int a ,b;
 public:
 Test(int i,int j):a(i),b(a * j){

    cout<<"constructor executed ...."<<endl;
    cout<<"value of a is "<<a<<" and value of b is "<<b;
 }
};
int main()
{
    Test t(3,5);
    return 0;
}