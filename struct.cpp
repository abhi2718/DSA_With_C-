#include <iostream>
using namespace std;

// Structure 
// User defined Data Type 
// collection of variables and functions

// Self Referential Structures :  https://www.youtube.com/watch?v=otu7gJVcwDw
// Self-referential structure refers to the structure have members which refer 
// to structure variable of the same type

struct Student
{
    int rollNumber;
    string name;

    string getName(){
        return  name;
    }
};

int main(){
   struct Student s1;
    s1.rollNumber = 2718;
    s1.name = "Abhishek Singh";
    cout << s1.getName() << endl;
    return 0;
}