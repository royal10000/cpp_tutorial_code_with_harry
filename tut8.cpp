// Loops in c++

#include <iostream>
using namespace std;
int main()
{
    // ************* while loop ***************
    // int i=1;
    // while(i<10){
    //     cout<<i<<endl;
    //     i++;
    // }

    // ***************do while loop ************
    // int j = 1;
    // do
    // {
    //     cout << j << endl;
    //     j++;
    // } while (j < 10);

    // ****************** for loop with break***************
    // for(int i=1;i<=10;i++){
    //     cout<<i<<endl;
    //     if(i==5){
    //         break;
    //     }
    // }

    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}