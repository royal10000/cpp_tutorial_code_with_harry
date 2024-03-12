#include<iostream>
using namespace std;
class Complex{
    int a,b;

    public:
    Complex(int x,int y);
    void printData(){
        cout<<"The sum of a and b  is "<<a<< " + "<<b<<"i"<<endl;
    }

};

Complex::Complex(int x=1,int y=2){
    a=y;
    b=x;
}
int main(){
    // Implicit call
    Complex c(1,2);

    // Explicit call    
    Complex c1=Complex(21,2);
    c.printData();  
    c1
    .printData();  
    return 0;
}