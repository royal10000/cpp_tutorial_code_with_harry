// Typecasting &  reference variable
#include<iostream>
using namespace std;
int c=20;   
int main(){

    //****Built in data type ***
    // int a,b,c;
    // cout<<"Enter a \t";
    // cin>>a;
    // cout<<"Enter b \t";
    // cin>>b;
    // c=a+b;
    // cout<<c<<endl ;
    
    // cout<<::c;

    // float d=34.5;
    // cout<<d<<endl;


// *********** float , long, double  literal data types ****************
    // cout<<"The size of 34.5 is "<<sizeof(34.5)<<endl;
    // cout<<"The size of 34.5f is "<<sizeof(34.5f)<<endl;
    // cout<<"The size of 34.5F is "<<sizeof(34.5F)<<endl;
    // cout<<"The size of 34.5l is "<<sizeof(34.5l)<<endl;
    // cout<<"The size of 34.5L is "<<sizeof(34.5L)<<endl;

    // ***************** Reference Variables ************************

    // float x=344;
    // float &y=x;
    // cout<<"This is actual variable "<<x<<endl;
    // cout<<"This is reference variable of x "<<y<<endl;


    // ************************  Type casting  *****************************
    int j=23;
    int k =343.53;
    cout<<"size of j is "<<sizeof(j)<<endl;

    cout<<"size of j after typecasting into float "<<(int)j<<endl;
    cout<<"size of j after typecasting into long "<<(int)k<<endl;
    return 0;
}