#include <iostream>
using namespace std;
int main()
{
    char letter;
    cout << "Enter a letter \t";
    cin >> letter;
    switch (letter)
    {
    case 'a' || 'A':
    {
        cout << letter << " is vowel";
    }
    break;
    case 'e':
    {
        cout << letter << " is vowel";
    }
    break;
    case 'i':
    {
        cout << letter << " is vowel";
    }
    break;
    case 'o':
    {
        cout << letter << " is vowel";
    }
    break;
    case 'u':
    {
        cout << letter << " is vowel";
    }
    break;
    default:
        cout <<letter<< " is consonent";
        break;
    }
    return 0;
}