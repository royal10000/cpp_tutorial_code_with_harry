#include <iostream>
#include <string>
using namespace std;
class Binary
{
    string s;
    void chk_bin();

public:
    void read();
    void ones_comp();
    void display();
};

void Binary::read()
{
    cout << "Enter a binary number : ";
    cin >> s;
    chk_bin();
}

void Binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << " Incorrect binary format \t " << endl;
            exit(0);
        }
    }
    ones_comp();
}

void Binary::ones_comp()
{
    chk_bin();

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    display();
}

void Binary::display()
{
    cout << "The ones complement of the given number is : " << s;
}
int main()
{
    Binary b;
    b.read();
    return 0;
}