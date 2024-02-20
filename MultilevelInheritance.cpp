#include <iostream>
using namespace std;

// base class student banaya hai
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

// public function ko define kiya hai scope resolution operator
void Student ::set_roll_number(int r)
{
    roll_number = r;
}
// function ko define kiya hai scope resolution operator
void Student ::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}

// derived class banaya hai Exam from student base class
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
// set_marks ko define kiya hai
void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
// get_marks ko define kiya hai
void Exam ::get_marks()
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}
// derived class banaya hai from the base class EXAM to derived class result
class Result : public Exam
{
    float percentage;

public:
    void display_results()
    {
        get_roll_number();
        get_marks();
        cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
    }
};
// protected se public access karte hai toh protected hi rahta hai important hai
int main()
{
    Result harry;
    harry.set_roll_number(420);
    harry.set_marks(94.0, 90.0);
    harry.display_results();
    return 0;
}
