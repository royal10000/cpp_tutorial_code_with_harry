#include <iostream>
using namespace std;
class Diposit
{
    int principal, years;
    float interest, returnValue;

public:
    Diposit();
    Diposit(int p, int y, float i); // r can be a value like 0.12
    Diposit(int p, int y, int i);   // r can be a value like 0.12
    void ShowResult(void);
};
Diposit::Diposit(int p, int y, float i)
{
    principal = p;
    years = y;
    interest = i;
    returnValue = principal;

    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue + (i + interest);
    }
};
Diposit::Diposit(int p, int y, int i)
{
    principal = p;
    years = y;
    interest = float(i)/100;
    returnValue = principal;

    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue + (i + interest);
    }
};

void Diposit::ShowResult()
{
    cout << "The return Value of principal " << principal << " with interest rate of " << interest << " for " << years << " is " << returnValue;
}
int main()
{
    Diposit d(2,3.6,1);
    d.ShowResult();
    return 0;
}