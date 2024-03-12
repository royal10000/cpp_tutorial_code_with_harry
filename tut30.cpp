#include<iostream>
using namespace std;
class Simple{
    int data1,data2;
    public :
    Simple(int,int);
    void printData(){
        cout<<"The sum is "<<data1<<" + "<<data2<<"i";
    }
};
Simple::Simple(int a,int b=3){
    data1=a;
    data2=b;
}

int main(){
    Simple s(1);
    s.printData(); 
    return 0;
}