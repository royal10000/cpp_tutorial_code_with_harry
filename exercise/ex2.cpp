#include <iostream>
using namespace std;
void swap(int*a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
    cout << " The value of a is " << *a << " and b is " << *b << " after swappping" << endl;
}

void swap1(int &a,int &b){
    int t=a;
    a=b;
    b=t;
    cout << " The value of a is " << a << " and b is " << b << " after swappping" << endl;

}
int main()
{
    int a = 1, b = 3;

    cout << " The value of a is " << a << " and b is " << b << " before swapping " << endl;
    swap(&a, &b);
    cout << " The value of a is " << a << " and b is " << b << " before swapping " << endl;

    swap1(a,b);
    return 0;
}