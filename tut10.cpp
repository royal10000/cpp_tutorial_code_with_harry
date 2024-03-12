// Array & Pointer
// Array is a collection of similar type stored in contigous memory location

#include<iostream>
using namespace std;
int main(){
    int mark[4]={1,3,4,5};
     mark[1]=34;
     
     
    for(int i=0;i<4;i++){
        cout<<"The value stored in address " <<&mark[i]<<" is " << mark[i]<<endl;
    }
}