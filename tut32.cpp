#include<iostream>
using namespace std;
class Number{
    int a;
    public:
    Number();

    Number(int num){
        a=num;
    }

    Number(Number &obj){
        cout<<"copy constructor called"<<endl;
        a=obj.a;
    }

    void display(){
        cout<<"The number for this object is "<<a<<endl;
    }
};
int main(){
    Number a(2),b(22),c(21);
    a.display();
    b.display();
    c.display();

    Number z1(a);
    z1.display();
    // c should resemble same
return 0;
}