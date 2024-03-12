// Call by Value && Call by reference

// Call by value

// #include <iostream>
// using namespace std;
// void swap(int *a, int *b)
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
//     cout<<"The value of a is "<<*a<<" and b is "<<*b<<" after swapping"<<endl;
// }
// int main()
// {
//     int a = 3, b = 4;
//     cout << "The value of a is " << a << " and b is " << b << " before swapping " << endl;
//     swap(&a, &b);
//     return 0;
// }

// Call by reference variable

#include<iostream>
using namespace std;
void swapRef(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;

}
int main(){
    int a=3,b=5;
    cout<<"The value of a and b before swapping is "<<a<<" and "<<b<<endl;
    swapRef(a,b);
    cout<<"The value oof a and b after swapping is "<<a<<" and "<<b<<endl;

}