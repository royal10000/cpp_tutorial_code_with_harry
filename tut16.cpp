// Function overloading

#include <iostream>
using namespace std;
int add(int a, int b, int c)
{
    return a + b + c;
}

int add(float a, int b)
{
    return a + b;
}

float volume(float r, int h)
{
    return (3.14 * r * r * h);
}
float volume( int l)
{
    return (l*l*l);
}
int main()
{
    cout << " The sum of 3 , 6 and 4 is " << add(3, 6, 4) << endl;
    cout << " The sum of 3 , 6 and 4 is " << add(2, 3) << endl;

    cout << "The volume of the circle is " << volume(3.2, 2)<<endl;
    cout << "The volume of the square is " << volume(3)<<endl;
    return 0;
}