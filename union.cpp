#include <iostream>
using namespace std;

union Student {
    int rollNumber;
    double age;
} student;

// The address of each data member in union is same 

int main()
{
    cout << &student.age << endl;
    cout << &student.rollNumber << endl;
    return 0;
}