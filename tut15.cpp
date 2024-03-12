#include <iostream>
using namespace std;
int rec(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * rec(n - 1);
    }
}

int fibo(int x)
{
    if (x <= 1)
    {
        return 1;
    }
    else
    {
        return (fibo(x-2) + fibo(x - 1));
    }
}
int main()
{
    int n;
    cout << "Enter a number you want to make a recursive ";
    cin >> n;
    cout << rec(n)<<endl;
    int x;
    cout << "Enter a number you want to make a recursive ";
    cin >> x;
    cout << fibo(x);
}