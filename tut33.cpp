#include <iostream>
using namespace std;
int count=0;
class Number
{

public:
    Number();
    ~Number();
};

Number::Number()
{
    count++;
    cout << "this is the time when constructor is called for and object"<<count<<endl;

}

Number::~Number(){
    cout<<"this is the time when my destructor is called for object number count"<<count<<endl;
    count--;
}
int main()
{
    cout<<"We are inside our main function"<<endl;
    cout<<"creating first object n1"<<endl;
    Number n1;
    {   
        cout<<"Entering this block"<<endl;
        cout<<"Creation two more objects"<<endl;
        Number n2,n3;
        cout<<"Exiting this block";
    }
    return 0;
}