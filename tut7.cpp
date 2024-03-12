#include <iostream>
using namespace std;
int main()
{

    // *************** Conditional Operator ******************************

    // ****************** if else condition*************
    // int age;
    // cout << "Enter your age : \t";
    // cin >> age;
    // if (age > 18)
    // {
    //     cout << "you are eligible to drive car" << endl;
    // }
    // else
    // {
    //     cout << "your age is under 18 so, you are not eligible to drive";
    // }

    // *********************  if else ladder *******************
    // int num1, num2, num3;
    // cout << "Enter First number : ";
    // cin >> num1;
    // cout << "Enter Second number : ";
    // cin >> num2;
    // cout << " Enter Third number : ";
    // cin >> num3;

    // if (num1 > num2)
    // {
    //     if (num1 > num3)
    //     {
    //         cout << "num1 is greater which is : " << num1;
    //     }
    //     else
    //     {
    //         cout << "num3 is greater which is : " << num3;
    //     }
    // }
    // else
    // {
    //     if (num2 > num3)
    //     {
    //         cout << "num2 is greater which is : " << num2;
    //     }
    //     else
    //     {
    //         cout << "num3 is greater which is : " << num3;
    //     }
    // }

    // ******************* Switch case condition **********************
    // char letter;
    // cout << "Enter a Character : ";
    // cin >> letter;
    // switch (letter)
    // {
    //     case 'a':
    //     case 'A':
    //     case 'e':
    //     case 'E':
    //     case 'i':
    //     case 'I':
    //     case 'o':
    //     case 'O':
    //     case 'u':
    //     case 'U':
    //     cout<<letter<<" is vowel"<<endl;
    //     break;

    //     default:
    //     cout<<letter <<" is consonent";
    //     break;
    // }

    //******************** if else if condition ****************************
    int percentage;
    cout<<"enter your percentage ";
    cin>>percentage;
    if(percentage>=90 && percentage<=100){
        cout<<"you have passed distinction by getting "<<percentage<<" percentage";
    }
    else if(percentage>=80 && percentage<90){
        cout<<"you have passed in first division by getting "<<percentage<<" percentage";
    }
    else if(percentage>=70 && percentage<80){
        cout<<"you have passed in second division by getting "<<percentage<<" percentage";
    }
    else if(percentage>=60 && percentage<70){
        cout<<"you have passed in third division by getting "<<percentage<<" percentage";
    }
    else{
        cout<<"you have failed in exam by getting "<<percentage<<" percentage";
    }
   
    return 0;
}