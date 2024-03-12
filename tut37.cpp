#include <iostream>
#include <string.h>
using namespace std;
class student
{
protected:
    int roll_Number;

public:
    void set_Number(int);
    void get_Number();
};

void student::set_Number(int r)
{
    roll_Number = r;
}

void student::get_Number()
{
    cout << "The roll number is : " << roll_Number << endl;
}

class Exam : public student
{
protected:
    float maths, physics;

public:
    void set_Mark(float, float);
    void get_Mark();
};
void Exam::set_Mark(float m, float p)
{
    maths = m;
    physics = p;
}

void Exam::get_Mark()
{
    cout << "The of student " << roll_Number << " in math and physics are " << maths << " and " << physics << endl;
}

class Result:public Exam{
    float percentage;

    public:
    void display_Result(){
        percentage=(maths+physics)/2;
        if(percentage>40){
            cout<<"student with roll number "<<roll_Number<<" with mark in math and physic "<<maths<<" and "<<physics <<" and passed the exam with percentage of "<<percentage;
        }else{
            cout<<"student with roll number "<<roll_Number<<" with mark in math and physic "<<maths<<" and "<<physics <<" and failed the exam with percentage of "<<percentage;
        }   
    }
};
int main()
{
    Result h1;
    h1.set_Number(23);
    h1.set_Mark(60.50,87.00 );
    h1.display_Result();
    return 0;
}