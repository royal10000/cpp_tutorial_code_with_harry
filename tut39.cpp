#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "how are you ??" << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "kese ho app     ??" << endl;
    }
};

class derive : public base1, public base2
{
public:
    void greet()
    {
        base1::greet();
    }
};
int main()
{
    base1 obj1;
    obj1.greet();
    base2 obj2;
    obj2.greet();
    derive d1;
    d1.greet();
    return 0;
}