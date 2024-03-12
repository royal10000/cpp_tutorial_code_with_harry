#include <iostream>
using namespace std;
// Multiple inheritance
class base1
{
protected:
    int base1int;

public:
    void set_base1int(int i)
    {
        base1int = i;
    }
};

class base2
{
protected:
    int base2int;

public:
    void set_base2int(int i)
    {
        base2int = i;
    }
};

class child : public base1, public base2
{

public:
    void show()
    {
        cout << "the value of base1int  is " << base1int << " and base2int is " << base2int << endl;
        cout << "the value of child is " << base1int + base2int;
    }
};
int main()
{
    child c1;
    c1.set_base1int(1);
    c1.set_base2int(3);
    c1.show();  
    return 0;
}